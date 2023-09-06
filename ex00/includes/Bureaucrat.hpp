/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:44:09 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/05 19:10:52 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat : public std::exception    {
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();

        Bureaucrat  &operator=(Bureaucrat const & src);
        std::exception GradeTooHighException;
        std::exception GradeTooLowException;

        std::string    getName() const;
        int            getGrade() const;

        void           incrGrade();
        void           decrGrade();


    private:
        const std::string   _name;
        int                 _grade;
};

#endif
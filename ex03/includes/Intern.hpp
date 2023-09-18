/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:50:54 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 03:36:09 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern    {

    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern  &operator=(Intern const & src);
        
        AForm   *makeForm(std::string const & name, std::string const & target);
        
        AForm   *makeShrub(std::string const & target);
        AForm   *makeRobot(std::string const & target);
        AForm   *makePresi(std::string const & target);
        
        class WrongName : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("Wrong form name, mission aborted.");
			}
		};
};

#endif
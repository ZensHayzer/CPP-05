/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:44:09 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/07 15:02:20 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat	{
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat			&operator=(Bureaucrat const & src);

		std::string const	getName() const;
		int					getGrade() const;

		void				incrGrade();
		void				decrGrade();

		class GradeTooHighException : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too high");
			}
		};

		class GradeTooLowException : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too low");
			}
		};


	private:
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream& o, Bureaucrat &src);

#endif
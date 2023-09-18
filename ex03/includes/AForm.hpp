/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:55:45 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:52:23 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm	{
	public:
		AForm();
		AForm(const std::string name, int reqGradeSign, int reqGradeExecute);
		AForm(AForm const & src);
		virtual	~AForm();

		AForm	&operator=(AForm const & src);
		
		const std::string	getName() const;
		bool				getSigned() const;
		const int			&getReqGradeSign() const;
		const int			&getReqGradeExecute() const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				checkExec(Bureaucrat const & executor) const;
		
		void				beSigned(Bureaucrat const & src);
		
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

		class NotSigned : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("Form is not signed");
			}
		};
		
		class TooLowExecute : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("The grade is too low for execute this form");
			}
		};

		class FailOpen : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("Fail to open file.");
			}
		};
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_reqGradeSign;
		const int			_reqGradeExecute;
};

std::ostream	&operator<<(std::ostream& o, AForm &src);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:55:45 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/12 23:27:51 by ajeanne          ###   ########.fr       */
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
		~AForm();

		AForm	&operator=(AForm const & src);
		
		const std::string	getName() const;
		bool				getSigned() const;
		const int			&getReqGradeSign() const;
		const int			&getReqGradeExecute() const;
		
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
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_reqGradeSign;
		const int			_reqGradeExecute;
};

std::ostream	&operator<<(std::ostream& o, AForm &src);

#endif
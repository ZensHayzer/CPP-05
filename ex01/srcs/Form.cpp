/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:08:02 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/12 22:17:03 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Project 2313"), _signed(0), _reqGradeSign(75), _reqGradeExecute(5)	{
	
}

Form::Form(const std::string name, int reqGradeSign, int reqGradeExecute) : _name(name), _signed(false), _reqGradeSign(reqGradeSign), _reqGradeExecute(reqGradeExecute)	{
	if (reqGradeSign < 1 || reqGradeExecute < 1)
		throw GradeTooHighException();
	else if (reqGradeSign > 150 || reqGradeExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _reqGradeSign(src._reqGradeSign), _reqGradeExecute(src._reqGradeExecute)	{
	
}

Form::~Form()	{
	
}

Form	&Form::operator=(Form const & src)	{
	if (this != &src)	{
		_signed = src.getSigned();
	}

	return (*this);
}

const std::string	Form::getName() const	{
	return (_name);
}

bool	Form::getSigned() const	{
	return (_signed);
}

const int	&Form::getReqGradeSign() const	{
	return (_reqGradeSign);
}

const int	&Form::getReqGradeExecute() const	{
	return (_reqGradeExecute);
}

void	Form::beSigned(Bureaucrat const & bur)	{
	if (bur.getGrade() > _reqGradeSign)
		throw GradeTooLowException();
	else
		_signed = 1;
}

std::ostream    &operator<<(std::ostream& o, Form &src)   {
	o << src.getName() << " Form, ";
	if (!src.getSigned())
		std::cout << "isn't signed, ";
	else
		std::cout << "is signed, ";
	std::cout << "grade required to sign is " << src.getReqGradeSign() << ", grade required to execute is " << src.getReqGradeExecute() << "." << std::endl;
	
	return (o);
}
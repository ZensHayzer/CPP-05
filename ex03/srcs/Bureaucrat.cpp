/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:51:40 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 15:47:25 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Christine"), _grade(150)  {
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)   {
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())  {
	if (this != &src)
		*this = src;
}

Bureaucrat::~Bureaucrat()   {
	
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & src)  {
	if (this != &src)
		_grade = src.getGrade();

	return (*this);
}


std::ostream    &operator<<(std::ostream& o, Bureaucrat &src)   {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (o);
}

std::string const Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const    {
	return (_grade);
}

void    Bureaucrat::incrGrade()   {
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void    Bureaucrat::decrGrade()	{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm & src)	{
	try	{
		src.beSigned(*this);
		std::cout << _name << " signed " << src.getName() << std::endl;
	}
	catch (std::exception const &exp)	{
		std::cout << _name << " couldnt sign " << src.getName() << " because " << exp.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)	{
	form.execute(*this);
	std::cout << _name << " executed " << form.getName() << std::endl;
}
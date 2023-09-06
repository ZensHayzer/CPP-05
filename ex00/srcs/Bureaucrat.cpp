/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:51:40 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/05 19:14:14 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Christine"), _grade(150)  {
    
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)   {
    if (grade < 1)
        throw std::exception(Bureaucrat::GradeTooLowException);
    else if (grade > 150)
        throw std::exception(Bureaucrat::GradeTooHighException);
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)  {
    if (this != &src)
        *this = src;
}

Bureaucrat::~Bureaucrat()   {
    
}

std::string Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const    {
    return (_grade);
}

void    Bureaucrat::incrGrade()   {
    if (_grade <= 0)
        throw std::exception(Bureaucrat::GradeTooHighException);
    else
        _grade--;
}

void    Bureaucrat::decrGrade()   {
    if (_grade <= 150)
        throw std::exception(Bureaucrat::GradeTooLowException);
    else
        _grade++;
}
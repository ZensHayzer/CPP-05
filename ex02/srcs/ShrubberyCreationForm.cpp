/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:38:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/13 03:17:59 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")	{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)	{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)	{
	if (this != &src)
		*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()	{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)	{
	if (this != &src)	{
		_target = src.getTarget();
	}
	
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const	{
	return (_target);
}
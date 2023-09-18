/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:38:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:51:29 by ajeanne          ###   ########.fr       */
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const	{
	checkExec(executor);
	
	std::fstream	file;
	
	file.open((_target + "_shrubbery").c_str(), std::ios::out);
	if (!file.is_open())	{
		throw FailOpen();
	}
	file << "    _\\/_\n     /\\\n     /\\\n    /  \\\n    /~~\\o\n   /o   \\\n  /~~*~~~\\\n o/    o \\\n /~~~~~~~~\\~`\n/__*_______\\\n     ||\n   \\====/\n    \\__/\n";
	file << "\n    _\\/_\n     /\\\n     /\\\n    /  \\\n    /~~\\o\n   /o   \\\n  /~~*~~~\\\n o/    o \\\n /~~~~~~~~\\~`\n/__*_______\\\n     ||\n   \\====/\n    \\__/\n";

	file.close();	
}
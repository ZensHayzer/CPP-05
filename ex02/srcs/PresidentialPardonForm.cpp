/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:39:03 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:50:46 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")	{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)	{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)	{
	if (this != &src)
		*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()	{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & src)	{
	if (this != &src)	{
		_target = src.getTarget();
	}
	
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const	{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const	{
	checkExec(executor);
	
	std::cout << "You, " << _target << ", has been pardon by Zaphod Beeblebrox !" << std::endl;
}
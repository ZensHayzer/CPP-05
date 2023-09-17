/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:38:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:51:38 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")	{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)	{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)	{
	if (this != &src)
		*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()	{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & src)	{
	if (this != &src)	{
		_target = src.getTarget();
	}
	
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const	{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const	{
	checkExec(executor);
	
	int	randomInt;
	
	srand(time(NULL));
	randomInt = rand() % 2 + 1;
	std::cout << "BrrrZzzzZrrRrrRzzzZr" << std::endl;
	if (randomInt == 1)	{
		std::cout << "Hey ! " << _target << " you successfully robotomized." << std::endl;
	}
	else	{
		std::cout << "I'm sorry, " << _target << " your Robotomy failed." << std::endl;
	}
}
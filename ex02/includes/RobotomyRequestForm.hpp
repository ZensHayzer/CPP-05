/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:21:02 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:51:07 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <time.h>
#include <stdlib.h>

class RobotomyRequestForm : public AForm	{
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm();
		
		RobotomyRequestForm	&operator=(RobotomyRequestForm const & src);

		std::string	getTarget() const;
	
		virtual void		execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:01:30 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 02:26:17 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()    {
    
}

Intern::Intern(Intern const & src)  {
    if (this != &src)
        *this = src;
}

Intern::~Intern()   {
    
}

Intern  &Intern::operator=(Intern const & src)  {
    (void)src;
    return (*this);
}

AForm   *Intern::makeForm(std::string name, std::string target) {
    if (name == "PresidentialPardonForm")   {
        PresidentialPardonForm  *PPF;
        PPF = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << PPF->getName() << std::endl;
        return (PPF);
    }
    else if (name == "RobotomyRequestForm"){
        RobotomyRequestForm  *RRF;
        RRF = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << RRF->getName() << std::endl;
        return (RRF);
    }
    else if (name == "ShrubberyCreationForm")   {
        ShrubberyCreationForm  *SCF;
        SCF = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << SCF->getName() << std::endl;
        return (SCF);
    }
    else
        std::cout << "This form name doesn't exist." << std::endl;
    
    return (NULL);
}
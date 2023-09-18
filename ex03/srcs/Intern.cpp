/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:01:30 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 06:18:02 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef AForm   *(Intern::*pf)(std::string const & target);

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

AForm   *Intern::makeShrub(std::string const & target)    {
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeRobot(std::string const & target)    {
    return (new RobotomyRequestForm(target));
}

AForm   *Intern::makePresi(std::string const & target)    {
    return (new PresidentialPardonForm(target));
}

AForm   *Intern::makeForm(std::string const & name, std::string const & target) {
    std::string nameTab[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    pf          func[] = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePresi};
    
    for (int i = 0; i < 3; i++) {
        if (name == nameTab[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return ((this->*func[i])(target));
        }
    }
    throw WrongName();
    return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 02:35:27 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()	{
	AForm					*Mouais;
	Intern					Fabrife;

	Mouais = Fabrife.makeForm("ShrubberyCreationForm", "toto");
	std::cout << *Mouais << std::endl;
	delete Mouais;
	
	Mouais = Fabrife.makeForm("RobotomyRequestForm", "titi");
	std::cout << *Mouais << std::endl;
	delete Mouais;

	Mouais = Fabrife.makeForm("PresidentialPardonForm", "tutu");
	std::cout << *Mouais << std::endl;
	delete Mouais;
	
	Mouais = Fabrife.makeForm("Mouais", "tata");
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 03:26:15 by ajeanne          ###   ########.fr       */
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

	try
	{
		Mouais = Fabrife.makeForm("ShrubberyCreationForm", "toto");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Mouais = Fabrife.makeForm("RobotomyRequestForm", "titi");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Mouais = Fabrife.makeForm("PresidentialPardonForm", "tutu");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Mouais = Fabrife.makeForm("Mouais", "tata");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
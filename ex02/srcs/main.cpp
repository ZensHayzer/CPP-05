/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:56:40 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()	{
	Bureaucrat				Clem("Clem", 3);
	Bureaucrat				Alex("Alex", 10);
	Bureaucrat				Annecha("Anne-Cha", 71);
	Bureaucrat				Shanley("Shanley", 139);
	Bureaucrat				Manu("Manu", 150);
	ShrubberyCreationForm	SCF1("Turlututu");
	ShrubberyCreationForm	SCF2("Turlututu");
	ShrubberyCreationForm	SCF3("Turlututu");
	RobotomyRequestForm		RRF1("Wobot");
	RobotomyRequestForm		RRF2("Wobot");
	RobotomyRequestForm		RRF3("Wobot");
	PresidentialPardonForm	PPF1("Arthur Dent");
	PresidentialPardonForm	PPF2("Arthur Dent");
	PresidentialPardonForm	PPF3("Arthur Dent");
	
	std::cout << " Testing ShrubberyCreationForm " << std::endl;
	std::cout << "\\_____________________________/" << std::endl;
	
	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		std::cout << SCF1 << std::endl;
		std::cout << Annecha << std::endl;
		Annecha.signForm(SCF1);
		Annecha.executeForm(SCF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Shanley.signForm(SCF2);
		Shanley.executeForm(SCF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Manu.signForm(SCF3);
		Manu.executeForm(SCF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n Testing RobotomyCreationForm " << std::endl;
	std::cout << "\\______________________________/" << std::endl;
	
	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		Clem.signForm(RRF1);
		Clem.executeForm(RRF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Annecha.signForm(RRF2);
		Annecha.executeForm(RRF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Shanley.signForm(RRF3);
		Shanley.executeForm(RRF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n Testing PresidentialPardonForm " << std::endl;
	std::cout << "\\________________________________/" << std::endl;
	
	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		Clem.signForm(PPF1);
		Clem.executeForm(PPF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Alex.signForm(PPF2);
		Alex.executeForm(PPF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Annecha.signForm(PPF3);
		Annecha.executeForm(PPF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}
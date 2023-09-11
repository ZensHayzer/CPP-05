/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/11 22:49:11 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()	{
	Bureaucrat	*Mireille = NULL;
	Bureaucrat	*Philou = NULL;

	try	{
		Mireille = new Bureaucrat("Mireille", -1);
		std::cout << *Mireille << std::endl;
	}
	catch (std::exception const & exp)	{
		std::cout << exp.what() << std::endl;
	}
	
	try	{
		Philou = new Bureaucrat("Philou", 256);
		std::cout << *Philou << std::endl;
	}
	catch (std::exception const & exp)	{
		std::cout << exp.what() << std::endl;
	}

	Bureaucrat	*Roberto = NULL;
	try	{
		Roberto = new Bureaucrat("Roberto", 2);
		std::cout << "\n" << *Roberto << std::endl;
		Roberto->incrGrade();
		std::cout << *Roberto << std::endl;
		Roberto->incrGrade();
		std::cout << *Roberto << std::endl;
		Roberto->incrGrade();
	}
	catch (std::exception const & exp)	{
		std::cout << exp.what() << std::endl;
	}
	
	delete Roberto;
	
	Bureaucrat	*Mirtille = NULL;
	try	{
		Mirtille = new Bureaucrat("Mirtille", 148);
		std::cout << "\n" << *Mirtille << std::endl;
		Mirtille->decrGrade();
		std::cout << *Mirtille << std::endl;
		Mirtille->decrGrade();
		std::cout << *Mirtille << std::endl;
		Mirtille->decrGrade();
	}
	catch (std::exception const & exp)	{
		std::cout << exp.what() << std::endl;
	}
	
	delete Mirtille;
	
	return (0);
}
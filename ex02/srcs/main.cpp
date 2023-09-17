/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/12 22:59:18 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()	{
	Form	F1("Form for discovering how to", 140, 10);
	Bureaucrat	Shanley("Shanley", 3);
	Bureaucrat	Manu("Manuel", 150);
	
	std::cout << "Required grade to sign " << F1.getReqGradeSign() << "." << std::endl;
	std::cout << Shanley << std::endl;
	std::cout << Manu << std::endl;
	std::cout << "Manu is signing :" << std::endl;
	Manu.signForm(F1);
	std::cout << "\nShanley is signing :" << std::endl;
	Shanley.signForm(F1);

	std::cout << "\nForm for discovering how to signed status : " << F1.getSigned() << std::endl;
	
	return (0);
}
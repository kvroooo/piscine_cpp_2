/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 17:27:22 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
// #include "Bureaucrat.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>

int main(void)
{	

	try
	{
		Intern	interimaire;
		Form	*rrf;

		rrf = interimaire.makeForm("robotomy repest", "coco");
		std::cout << *rrf << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << BPNK << "err: ";
		std::cout << e.what() << RST << std::endl;
	}
}
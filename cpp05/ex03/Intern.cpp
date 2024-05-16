/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:54:30 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/16 17:52:05 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.hpp"

Intern::Intern()
{
	std::cout << "default CONSTRUCTOR Intern called!" << std::endl;
}

Intern::Intern(const Intern & i)
{
	std::cout << "copy CONSTRUCTOR Intern called!" << std::endl;
	*this = i;
}

Intern & Intern::operator=(const Intern & i)
{
	std::cout << "copy assignement operator Intern called" << std::endl;
	return *this;
}

AForm * Intern::makeForm(std::string name, std::string target)
{
	std::cout << "Intern creates " << name << std::endl; 

	// AForm	*form;
	const static std::string list[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	// void (AForm::*t[])(void) = {&RobotomyRequestForm::RobotomyRequestForm(name), &ShrubberyCreationForm(name), PresidentialPardonForm(name)}; //TODO: huh?
	if (name.empty())
	{
		std::cout << BGRN << "no form given" << RST << std::endl;
		return NULL;
	}

	for (int i=0; i<3; i++)
	{
		if (name == list[i])
		{
		// return t[i];
		}
	}
	return NULL;
}

Intern::~Intern()
{
	std::cout << "default DESTRUCTOR Intern called!" << std::endl;
}

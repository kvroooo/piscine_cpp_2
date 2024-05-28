/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:39:12 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 17:24:47 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "default CONSTRUCTOR Intern called !" << std::endl;
}

Intern::~Intern()
{
	std::cout << "DESTRUCTOR Intern called !" << std::endl;
}


Intern::Intern(const Intern & i)
{
	std::cout << "copy CONSTRUCTOR Intern called !" << std::endl;
	*this = i;
}

Intern & Intern::operator=(const Intern & i)
{
	std::cout << "copy assignement operator Intern called !" << std::endl;
	(void)i;
	return *this;
}

static Form * ShrubberyCreation(std::string t)
{
	return (new ShrubberyCreationForm(t));
}

static Form * RobotomyReauest(std::string t)
{
	return (new RobotomyRequestForm(t));
}

static Form * PresidentialPardon(std::string t)
{
	return (new PresidentialPardonForm(t));
}

Form * Intern::makeForm(std::string f, std::string t)
{
	Form *(*ft[3])(std::string) = {ShrubberyCreation, RobotomyReauest, PresidentialPardon};
	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i=0; i < 3; i++)
	{
		if (f == tab[i])
			return (ft[i])(t);
	}
	throw WrongFormException();
	return NULL;
}
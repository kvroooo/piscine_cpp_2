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
	(void)i;
	return *this;
}
void	Intern::setTab(const std::string &target)
{
	f[0] = new RobotomyRequestForm(target);
	f[1] = new ShrubberyCreationForm(target);
	f[2] = new PresidentialPardonForm(target);
}
Form * Intern::makeForm(const std::string &name, const std::string &target)
{
	int i;
	std::cout << "Intern creates " << name << std::endl; 

	// if (name.empty() || target.empty())
	// {
	// 	throw WrongStrException();
	// 	return NULL;
	// }
	this->setTab(target);
	const static std::string list[] = {"robotomy request", 
				"shrubbery creation", "presidential pardon"};
	for (i=0;i<3; i++)
	{
		if (name == list[i])
			return f[i];
	}
	std::cout << BGRN << "Form " << name << " doesn't exist in our data !" << RST << std::endl; 	
	return NULL;
}
//test
Intern::~Intern()
{
	for (int i = 0; i<3; i++)
	{
		if (f[i])
			delete f[i];
	}
	std::cout << "default DESTRUCTOR Intern called!" << std::endl;
}

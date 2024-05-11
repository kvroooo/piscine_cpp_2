/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:28:38 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 16:40:31 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << GRN << "default CONSTRUCTOR Shrubberry called !" << RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target)
{
	std::cout << GRN << "default CONSTRUCTOR Shrubberry called !" << RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & s) : AForm(s)
{
	std::cout << "copy CONSTRUCTOR Shrub called" << RST << std::endl;
	*this = s;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & s)
{
	std::cout << "copy operator assignement Shrub called" << RST << std::endl;
	target = s.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return target;
}

void	ShrubberyCreationForm::ft_tree(int sign, int exec) const
{
	if (sign > 145 || exec > 137)
	{
		throw GradeTooLowException(); //TO DO: change to custom exception
		return ;
	}

	const std::string name = target + "_shrubbery";
	std::fstream o;

	o.open(name.c_str(), std::fstream::out);
	std::cout <<BCYN<< "file " << name << " created" <<RST<<std::endl;
	o << "    &&&&&" << std::endl;
	o << "  &&&&&&&&&" << std::endl;
	o << "&&&&&&&&&&&&&&" << std::endl;
	o << " &&&&&&&&&&&&" << std::endl;
	o << "     ||" << std::endl;
	o << "     ||/" << std::endl;
	o << "     ||"  << std::endl;
	o.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GRN << "DESTRUCTOR Shrubberry called !" << RST << std::endl;
}


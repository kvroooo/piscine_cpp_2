/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:28:38 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 11:52:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << GRN << "default CONSTRUCTOR Shrubberry called !" << RST << std::endl;
	target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm ("ShrubberyRequestForm", 145, 137), target(target)
{
	std::cout << GRN << "parametric CONSTRUCTOR Shrubberry called !" << RST << std::endl;
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

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->getSign() == false)
	{
		throw FormNotSignedException();
		return ;
	}
	else if (executor.getGrade() > this->getGrade_e())
	{
		throw GradeTooLowException();
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


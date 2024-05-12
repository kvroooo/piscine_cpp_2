/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:08:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 14:35:09 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout<<CYN<<"default CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout<<CYN<<"parametric CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & r) : AForm(r)
{
	std::cout<<CYN<<"copy CONSTRUCTOR RobotomyRequestForm called !" <<RST<< std::endl;
	*this = r;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & r)
{
	std::cout<<CYN<<"copy assignement operator RobotomyRequestForm called !" <<RST<< std::endl;
target = r.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return target;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (executor.getGrade() <= this->getGrade_e() || this->getSign() == false)
	{
		std::cout << BCYN << "*DRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*" << std::endl;
		std::cout << target << " has been successfully 50%% of time ^^" << RST<< std::endl;
	}
	else
	{
		std::cout << BCYN << "the robotomy failed";
		throw GradeTooLowException();
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<CYN<<"DESTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}
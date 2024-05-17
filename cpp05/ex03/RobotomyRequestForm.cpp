/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:08:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/16 16:29:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	std::cout<<CYN<<"default CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
	target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout<<CYN<<"parametric CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & r) : Form(r)
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
	int static i;

	if (i%2==0)
		std::cout << BCYN << "*DRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*" << RST<< std::endl;
	else
		std::cout <<BCYN << "srry.. " << target << " has been successfully 50%% of time ^^" << RST<< std::endl;
	i++;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<CYN<<"DESTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}
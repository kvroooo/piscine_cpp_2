/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:08:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/03 16:41:07 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout<<CYN<<"default CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target)
{
	std::cout<<CYN<<"parametric CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & r)
{
	std::cout<<CYN<<"copy CONSTRUCTOR RobotomyRequestForm called !" <<RST<< std::endl;
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

void RobotomyRequestForm::ft_inform(void) const
{
	std::cout << BCYN << "*DRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*" << std::endl;
	std::cout << target << " has been successfully 50%% of time ^^" << RST<< std::endl;
	// what if not successfull ???
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<CYN<<"DESTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}
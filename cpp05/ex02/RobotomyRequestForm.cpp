/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:08:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:10:44 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout<<CYN<<"default CONSTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
	target = "default";
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
	std::srand(time(0));
	int nbr = rand() % 2;
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

	if (nbr%2==0)
		std::cout << BCYN << "* DRRRRRRR *" << RST<< std::endl;
	else
		std::cout << BCYN << "* * BZZ.. BZZZZZ ... * *" << RST<< std::endl;

	std::cout <<BCYN << "srry.. " << target << " has been robotomized successfully 50%% of time ^^" << RST<< std::endl;
	i++;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<CYN<<"DESTRUCTOR RobotomyRequestForm called" <<RST<< std::endl;
}
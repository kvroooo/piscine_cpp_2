/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:40:09 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:05:58 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout<<GRN<<"default CONSTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
	target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout<<GRN<<"parametric CONSTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & r) : AForm(r)
{
	std::cout<<GRN<<"copy CONSTRUCTOR PresidentialPardonForm called !" <<RST<< std::endl;
	*this = r;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & r)
{
	std::cout<<GRN<<"copy assignement operator PresidentialPardonForm called !" <<RST<< std::endl;
target = r.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return target;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
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
		std::cout << BGRN << "* " << target << " has been pardoned by Zaphod Beeblebrox*" << RST<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<GRN<<"DESTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
}
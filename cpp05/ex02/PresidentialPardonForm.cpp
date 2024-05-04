/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:40:09 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 14:47:41 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout<<GRN<<"default CONSTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target)
{
	std::cout<<GRN<<"parametric CONSTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & r)
{
	std::cout<<GRN<<"copy CONSTRUCTOR PresidentialPardonForm called !" <<RST<< std::endl;
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

void PresidentialPardonForm::ft_forgive(int sign, int exec) const
{
	if (sign <= 25 && exec <= 5)
		std::cout << BGRN << "* " << target << " has been pardoned by Zaphod Beeblebrox*" << RST<< std::endl;
	else
		std::cout << BGRN << "seen your grades.. +you can´t ask for forgivness" << RST << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<GRN<<"DESTRUCTOR PresidentialPardonForm called" <<RST<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:49 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 15:01:06 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bob"), grade(1)
{
	std::cout << BPNK << "default COSNTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
}

Bureaucrat::Bureaucrat(std::string nom, int note) : name(nom), grade(note)
{
	std::cout << BPNK << "parametric CONSTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
	if (note < 1)
		throw GradeTooHighException();
	else if (note > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & b) : name(b.getName())
{
	std::cout << "copy COSNTRUCTOR Bureaucrat called !" << std::endl;
	*this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & b)
{
	std::cout << "copy assignmement operator called" << std::endl;
	this->grade = b.getGrade();
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::increment(void) //minus 1
{
	std::cout << CYN << "increment called !" << RST << std::endl;
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade -= 1;
	std::cout << *this;
}

void	Bureaucrat::decrement(void) //plus 1
{
	std::cout << CYN << "decrement called !" << RST << std::endl;
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade += 1;
	std::cout << *this;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & b)
{
	o << BCYN << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << RST << std::endl;
	return o;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BPNK << "DESTRUCTOR Bureaucrat " << name << " called !" << RST << std::endl;
}
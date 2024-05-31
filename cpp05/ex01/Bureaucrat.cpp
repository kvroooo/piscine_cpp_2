/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:49 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 11:16:16 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bob"), grade(1)
{
	std::cout << PNK << "default COSNTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
}

Bureaucrat::Bureaucrat(std::string nom, int note) : name(nom), grade(note)
{
	std::cout << PNK << "parametric COSNTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
	if (note < 1)
		throw GradeTooHighException();
	else if (note > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & b) : name(b.getName())
{
	std::cout << PNK << "copy COSNTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
	*this = b;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & b)
{
	std::cout << PNK << "copy assignmement operator called" << RST << std::endl;
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
	std::cout << *this << std::endl;
}

void	Bureaucrat::decrement(void) //plus 1
{
	std::cout << CYN << "decrement called !" << RST << std::endl;
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade += 1;
	std::cout << *this << std::endl;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & b)
{
	o << BPNK << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << RST << std::endl;
	return o;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << PNK << "DESTRUCTOR " << name << " Bureaucrat called !" << RST << std::endl;
}
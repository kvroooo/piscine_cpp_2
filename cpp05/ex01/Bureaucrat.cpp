/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:49 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/01 17:43:37 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <exception>
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat() : name("Bob"), grade(1)
{
	std::cout << BPNK << "default COSNTRUCTOR Bureaucrat called !" << RST << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & b)
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

	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char * what() const throw()
			{ 
				return ("grade too high to increment");
			}
	};
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade -= 1;
	std::cout << *this;
}

void	Bureaucrat::decrement(void) //plus 1
{
	std::cout << CYN << "decrement called !" << RST << std::endl;
	class GradeTooLowException : public std::exception 
	{
		virtual const char * what() const throw()
		{
			return ("grade too low to decrement");
		}
	};
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
	std::cout << BPNK << "default DSTRUCTOR Bureaucrat called !" << RST << std::endl;
}
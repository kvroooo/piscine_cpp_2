/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:27:53 by smlamali          #+#    #+#             */
/*   Updated: 2024/04/02 18:30:32 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <string>

//		--- DEFAULT CONSTRUCTOR ---
Bureaucrat::Bureaucrat()
{
	std::cout << CYN << "constructor Bureaucrat called !" << RST << std::endl;
}

//		--- PARAMETRIC CONSTRUCTOR ---
Bureaucrat::Bureaucrat(const std::string Name, int Grade) : grade(Grade), name(Name)
{
	std::cout << CYN << "parametric constructor " << Name << " Bureaucrat called !" << RST << std::endl;	
}

void	Bureaucrat::setGrade(int Grade)
{
	grade = Grade;
}

int	Bureaucrat::getGrade(void) const
{
	return grade;
}

std::string	Bureaucrat::getName(void) const
{
	return name;
}

void	Bureaucrat::upGrade(void)
{
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade too low (<1)");
			}
	};
	grade -= 1;
	std::cout << this << std::endl;
}

void	Bureaucrat::lowGrade(void)
{
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade too high (>150)");
			}
	};
	grade += 1;
	std::cout << this << std::endl;
}

void	Bureaucrat::tooHigh()
{

}

//		--- DESTRUCTOR ---
Bureaucrat::~Bureaucrat()
{
	std::cout << CYN << "destructor Bureaucrat called !" << RST << std::endl;
}

std::ostream & operator <<(std::ostream& o, const Bureaucrat & Bureaucrat)
{
	o << Bureaucrat.getName() << ", bureaucrate grade " << Bureaucrat.getGrade();
	return o;
}
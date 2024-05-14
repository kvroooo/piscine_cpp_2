/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:29:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 17:16:36 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.hpp"

AForm::AForm() : sign(false), name("Bob"), grade_s(150), grade_e(1)
{
	std::cout << GRN << "default CONSTRUCTOR AForm " << name << " called !" << RST << std::endl;
}

AForm::AForm(std::string name, int s, int e) : sign(false), name(name), grade_s(s), grade_e(e)
{
	std::cout << GRN << "parametric CONSTRUCTOR AForm " << name << " called !" << RST << std::endl;
	if (s < 1 || e < 1)
		throw GradeTooHighException();
	else if (s > 150 || e > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm & f) : name(f.getName()), grade_s(f.getGrade_s()), grade_e(f.getGrade_e()) 
{
	std::cout << GRN << "copy CONSTRUCTOR AForm called !" << RST << std::endl;
	*this = f;
}

AForm & AForm::operator=(const AForm & f)
{
	std::cout << "copy operator assignement AForm called" << RST << std::endl;
	this->sign = f.getSign();
	return *this;
}

std::ostream & operator<<(std::ostream & o, const AForm & f)
{
	o << BGRN << f.getName() << " -> signed : " << f.getSign() << " | grade to sign : " << f.getGrade_s() << " | grade to execute : " << f.getGrade_e() << RST << std::endl;
	return o;
}

int AForm::getGrade_e(void) const
{
	return this->grade_e;
}

int AForm::getGrade_s(void) const
{
	return this->grade_s;
}

bool AForm::getSign(void) const
{
	return this->sign;
}

void AForm::beSigned(const Bureaucrat & b)
{
	std::cout << BCYN << b.getName() << " try to sign " << name << "..." << RST << std::endl;
	if (b.getGrade() <= grade_s)
	{
		sign = 1;
		std::cout << BCYN << this->getName() << " successfully signed !" << RST << std::endl;
	}
	else
	   throw GradeTooLowException();  
}

void	AForm::signAForm(const Bureaucrat & b)
{
	if (sign == 1)
		std::cout << b.getName() << " signed " << name << std::endl;
	else
		std::cout << b.getName() << " couldn't sign " << name << " bc he lame" << std::endl; 
}

std::string AForm::getName(void) const
{
	return this->name;
}

void	AForm::execute(const Bureaucrat & executor) const
{
	(void)executor;
}

AForm::~AForm()
{	std::cout << GRN << "DESTRUCTOR AForm " << name << " called" << RST << std::endl;

}
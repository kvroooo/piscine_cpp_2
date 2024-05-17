/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:29:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 17:16:36 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.hpp"

Form::Form() : sign(false), name("Bob"), grade_s(150), grade_e(1)
{
	std::cout << GRN << "default CONSTRUCTOR Form " << name << " called !" << RST << std::endl;
}

Form::Form(std::string name, int s, int e) : sign(false), name(name), grade_s(s), grade_e(e)
{
	std::cout << GRN << "parametric CONSTRUCTOR Form " << name << " called !" << RST << std::endl;
	if (s < 1 || e < 1)
		throw GradeTooHighException();
	else if (s > 150 || e > 150)
		throw GradeTooLowException();
}

Form::Form(const Form & f) : name(f.getName()), grade_s(f.getGrade_s()), grade_e(f.getGrade_e()) 
{
	std::cout << GRN << "copy CONSTRUCTOR Form called !" << RST << std::endl;
	*this = f;
}

Form & Form::operator=(const Form & f)
{
	std::cout << "copy operator assignement Form called" << RST << std::endl;
	this->sign = f.getSign();
	return *this;
}

std::ostream & operator<<(std::ostream & o, const Form & f)
{
	o << BGRN << f.getName() << " -> signed : " << f.getSign() << " | grade to sign : " << f.getGrade_s() << " | grade to execute : " << f.getGrade_e() << RST << std::endl;
	return o;
}

int Form::getGrade_e(void) const
{
	return this->grade_e;
}

int Form::getGrade_s(void) const
{
	return this->grade_s;
}

bool Form::getSign(void) const
{
	return this->sign;
}

void Form::beSigned(const Bureaucrat & b)
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

void	Form::signForm(const Bureaucrat & b)
{
	if (sign == 1)
		std::cout << b.getName() << " signed " << name << std::endl;
	else
		std::cout << b.getName() << " couldn't sign " << name << " bc he lame" << std::endl; 
}

std::string Form::getName(void) const
{
	return this->name;
}

void	Form::execute(const Bureaucrat & executor) const
{
	(void)executor;
}

Form::~Form()
{	std::cout << GRN << "DESTRUCTOR Form " << name << " called" << RST << std::endl;

}
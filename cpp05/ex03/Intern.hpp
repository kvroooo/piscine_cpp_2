/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:54:23 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/16 17:22:55 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	Form *f[3];
public:
	Intern();
	~Intern();
	Intern(const Intern & i);

	Intern & operator=(const Intern & i);

	Form *	makeForm(const std::string &name, const std::string &target);
	void	setTab(const std::string &target);

	// class WrongStrException : public std::exception
	// {
	// 	virtual const char * what() const throw()
	// 	{
	// 		return ("err: empty string");
	// 	}
	// };
};

std::ostream & operator<<(std::ostream & o, const Intern & i);

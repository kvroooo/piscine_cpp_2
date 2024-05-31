/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:54:23 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:27:19 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern & c);

	Intern & operator=(const Intern & c);

	Form * makeForm(std::string f, std::string t);

	class WrongFormException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("this form doesn't exist");
		}
	};
};
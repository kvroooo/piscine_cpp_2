/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:35:14 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 17:23:48 by smlamali         ###   ########.fr       */
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
			return ("this form don't exist");
		}
	};
};
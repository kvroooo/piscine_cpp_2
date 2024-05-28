/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:22 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 15:06:34 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "colors.hpp"

#include <string>
#include <exception>
#include <iostream>
#include <ostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int note);
	Bureaucrat(const Bureaucrat & b);

	Bureaucrat & operator=(const Bureaucrat & b);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);

	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char * what() const throw()
			{ 
				return ("grade too high");
			}
	};

	class GradeTooLowException : public std::exception 
	{
		virtual const char * what() const throw()
		{
			return ("grade too low");
		}
	};
};

std::ostream & operator<< (std::ostream & o, const Bureaucrat & b);
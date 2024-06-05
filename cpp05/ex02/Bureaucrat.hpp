/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:22 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/04 13:55:36 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <exception>
#include <iostream>
#include <ostream>
#include "colors.hpp"
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string nom, int note);
	Bureaucrat(const Bureaucrat & b);

	Bureaucrat & operator=(Bureaucrat const & b);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);
	void		executeForm(AForm const & form);
	void		signForm(AForm  & f);

	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char * what() const throw()
			{ 
				return ("grade too high!");
			}
	};

	class GradeTooLowException : public std::exception 
	{
		virtual const char * what() const throw()
		{
			return ("grade too low!");
		}
	};
};

std::ostream & operator<< (std::ostream & o, const Bureaucrat & b);
#endif
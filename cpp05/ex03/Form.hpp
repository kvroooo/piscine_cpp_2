/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:28:57 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/28 16:38:23 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
private:
	bool 		sign;
	const		std::string name;
	const int 	grade_s;
	const int 	grade_e;

public:
	Form();
	virtual ~Form();
	Form(std::string name, int s, int e);
	Form(const Form & f);

	Form & operator=(const Form & f);

	std::string 	getName(void)const;
	int				getGrade_e(void)const;
	int				getGrade_s(void)const;
	bool			getSign(void)const;
	void 			beSigned(const Bureaucrat & b);
	void			signAForm(const Bureaucrat & b);
	virtual void	execute(const Bureaucrat & executor) const = 0;

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
	class FormNotSignedException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("form not signed !");
			}
	};
};

std::ostream & operator<<(std::ostream & o, const Form & f);
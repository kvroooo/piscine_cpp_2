/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:28:57 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 16:40:41 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"

class AForm
{
private:
	bool 		sign;
	const		std::string name;
	const int 	grade_s;
	const int 	grade_e;

public:
	AForm();
	~AForm();
	AForm(std::string name, int s, int e);
	AForm(const AForm & f);

	AForm & operator=(const AForm & f);

	std::string getName(void)const;
	int			getGrade_e(void)const;
	int			getGrade_s(void)const;
	bool		getSign(void)const;
	void 		beSigned(const Bureaucrat & b);
	void		signAForm(const Bureaucrat & b);
	void		execute(const Bureaucrat & executor) const;

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

std::ostream & operator<<(std::ostream & o, const AForm & f);
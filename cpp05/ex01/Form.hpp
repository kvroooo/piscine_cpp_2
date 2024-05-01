/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:28:57 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/01 17:58:18 by smlamali         ###   ########.fr       */
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
	~Form();
	Form(std::string name, int s, int e);
	Form(const Form & f);

	Form & operator=(const Form & f);

	std::string getName(void)const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);
	void 		beSigned(void);
};

std::ostream & operator<<(std::ostream o, const Form & f);
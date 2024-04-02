/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:00:55 by smlamali          #+#    #+#             */
/*   Updated: 2024/04/02 18:21:59 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "../colors.hpp"

class Bureaucrat
{
private:
	int					grade;
	const std::string 	name;

public:
	Bureaucrat();
	Bureaucrat(const std::string Name, int Grade);
	~Bureaucrat();

	void		upGrade(void);
	void		lowGrade(void);
	int			getGrade(void) const;
	void		setGrade(int Grade);
	std::string	getName(void) const;

	void		tooHigh(void);
	void		tooLow(void);
};

std::ostream & operator << (std::ostream& o, const Bureaucrat & bureaucrat);
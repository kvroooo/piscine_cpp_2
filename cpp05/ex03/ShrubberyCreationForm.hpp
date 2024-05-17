/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:28:42 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 14:32:59 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & s);

	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & s);

	std::string 	getTarget(void) const;
	virtual void	execute(const Bureaucrat & executor) const;
};
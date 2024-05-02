/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:28:38 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/02 18:12:28 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string ft_rename(const std::string& argv1)
{
	return argv1 + "_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << GRN << "default CONSTRUCTOR Shrubberry called !" << RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	std::cout << GRN << "default CONSTRUCTOR Shrubberry called !" << RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & s) 
{
	std::cout << "copy CONSTRUCTOR Shrub called" << RST << std::endl;
	*this = s;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & s)
{
	std::cout << "copy operator assignement Shrub called" << RST << std::endl;
	return *this;
}

void	ShrubberyCreationForm::ft_tree(void)
{
	std::string path = ft_rename(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GRN << "DESTRUCTOR Shrubberry called !" << RST << std::endl;
}


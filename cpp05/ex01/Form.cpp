/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:29:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/01 17:58:48 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : sign(false), name("Bob"), grade_s(75), grade_e(1)
{
	std::cout << BPNK << "default CONSTRUCTOR Form " << name << " called !" << RST << std::endl;
}

Form::Form(std::string name, int s, int e) : sign(false), name(name), grade_s(s), grade_e(e)
{
	std::cout << BPNK << "parametric CONSTRUCTOR Form " << name << "called !" << RST << std::endl;
}

Form::Form(const Form & f)
{
	std::cout << BPNK << "copy CONSTRUCTOR Form called !" << RST << std::endl;
	*this = f;
}

Form & Form::operator=(const Form & f)
{
	std::cout << "copy operator assignement Form called" << RST << std::endl;
	
}

Form::~Form()
{
	std::cout << BPNK << "DESTRUCTOR FORM " << name << "called" << RST << std::endl;
}
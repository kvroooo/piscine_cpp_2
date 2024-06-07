/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:41:56 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 11:33:44 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstring>

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter & s)
{
	(void)s;
	*this = s;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & s)
{
	(void)s;
	return *this;
}

void ScalarConverter::convert(std::string literal)
{
	try
	{
		ScalarConverter::charConvert(literal);
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


void	ScalarConverter::charConvert(std::string literal)
{
	char	**endPtr = NULL;
	long 	val = std::strtol(literal.c_str(), &(*endPtr), 0);

	std::cout << "val=" << val << std::endl;
	if (literal.empty())
		throw EmptyException();
	std::cout << "char : ";
	//check si [0] est dans la tab ascii / printable, len > 1 convert to int et check
	if (literal.size() == 1 && std::isprint(static_cast<unsigned>(literal[0])))
		std::cout << literal[0] << std::endl;
	else if (val >= 0 && val <= 127 && std::isprint(static_cast<char>(val)))
	{
		std::cout << static_cast<char>(val) << std::endl;
	}
	else
		std::cout << "non displayable" << std::endl;
}
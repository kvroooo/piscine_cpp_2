/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:41:56 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 16:53:45 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <ostream>

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
		ScalarConverter::intConvert(literal);
		ScalarConverter::floatConvert(literal);
		ScalarConverter::doubleConvert(literal);
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ScalarConverter::charConvert(std::string literal)
{
	char	*endPtr = NULL;
	long 	val = std::strtol(literal.c_str(), &endPtr, 0);

	if (literal.empty())
		throw EmptyException();
	std::cout << "char : ";
	if (literal.size() == 1 && std::isprint(static_cast<unsigned>(literal[0])))
		std::cout << literal[0] << std::endl;
	else if (val >= 0 && val <= 127 && std::isprint(static_cast<char>(val)))
		std::cout << static_cast<char>(val) << std::endl;
	else if (literal.size() > 1 && val != 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::intConvert(std::string literal)
{
	char *endPtr = NULL;
	long	val = std::strtol(literal.c_str(), &endPtr, 0);

	if (literal.empty())
		throw EmptyException();

	std::cout << "int : ";
	if (literal.size() == 1 && (literal[0] >= '0' && literal[0] <= '9'))
		std::cout << val << std::endl;
	else if (literal.size() == 1)
		std::cout << static_cast<int>(literal[0]) << std::endl;
	else if (literal.size() > 1 && val != 0)
		std::cout << static_cast<int>(val) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::floatConvert(std::string literal)
{
	char *endPtr = NULL;
	float val = std::strtof(literal.c_str(),&endPtr);
	long  tmp = std::strtol(literal.c_str(), &endPtr, 0);
	if (literal.empty())
		throw EmptyException();
	
	std::cout << "float : ";

	if (literal.size() == 1 && (literal[0] >= '0' && literal[0] <= '9'))
		std::cout << val;
	else if (literal.size() == 1)
		std::cout << static_cast<float>(literal[0]);
	else  if (literal.size() > 1 && val != 0)
		std::cout << static_cast<float>(val);
	else
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (val == tmp)
		std::cout << ".0";
	std::cout << "f";
	std::cout << std::endl;
}

void	ScalarConverter::doubleConvert(std::string literal)
{
	char *endPtr = NULL;
	double val = std::strtod(literal.c_str(),&endPtr);
	float tmp = std::strtof(literal.c_str(),&endPtr);

	if (literal.empty())
		throw EmptyException();
	std::cout << "double : ";
	if (literal.size() == 1 && (literal[0] >= '0' && literal[0] <= '9'))
		std::cout << val;
	else if (literal.size() == 1)
		std::cout << static_cast<double>(literal[0]);
	else  if (literal.size() > 1 && val != 0)
		std::cout << static_cast<double>(val);
	else
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (val == tmp && 
		(literal.find("inf") == std::string::npos && literal.find("nan") == std::string::npos))
		std::cout << ".0";
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:21:28 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/08 18:00:34 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(int argc, char *argv)
{
	std::cout << "constructor" << std::endl;
	try
	{
		if (argc != 2)
			throw WrongArgException();
		str = argv;
		std::cout << "str=" << str << std::endl;
		Rpn::check();
		Rpn::addNbrs();
	}catch(std::exception & e)
	{std::cout << e.what() << std::endl;}
}

Rpn::~Rpn()
{std::cout << "destructor" << std::endl;}

Rpn::Rpn(const Rpn & r)
{*this = r;}

Rpn & Rpn::operator=(const Rpn & r)
{
	this->str = r.getStr();
	return *this;
}

int	Rpn::isOp(char c)
{
	if (c == '+' || c == '-' ||
		c == '/' || c == '*')
		return (1);
	return (0);
}
void	Rpn::check()
{
	for (size_t i = 0; i < str.size(); i++) 
	{	
		if (str[i] == ' ')
			str.erase(i, 1);
		if (str[i] == '+' || str[i] == '-' || 
			str[i] == '/' || str[i] == '*')
			;
		else if ((str[i] < '0' || str[i] > '9'))
			throw WrongArgException();
	}
	std::cout << "nstr=" << str << std::endl;
}

void	Rpn::addNbrs(void)
{
	size_t i;
	for (i = 0; i < str.size() && !isOp(str[i]); i++)
		s.push(static_cast<int>(str[i]) - '0');
	if (isOp(str[i]))
		s.push(calc(i, str[i-1], str[i-2]));
}

int Rpn::calc(int i, int a, int b)
{
	s.pop();
	s.pop();
	if (str[i] == '-')
		return (a - b);
	else if (str[i] == '+')
		return (a + b);
	else if (str[i] == '*')
		return (a * b);
	else if (str[i] == '/')
		return (a / b);
	return (0);
}

std::string Rpn::getStr(void) const
{return this->str;}

void	Rpn::printS(void) const
{
	
}
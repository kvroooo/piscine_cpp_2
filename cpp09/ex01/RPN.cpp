/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:21:28 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/11 15:18:47 by smlamali         ###   ########.fr       */
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
}

void	Rpn::addNbrs(void)
{
	size_t i = 0;
	while (i < str.size())
	{
		while(i < str.size() && !isOp(str[i]))
		{
			s.push(static_cast<int>(str[i]) - '0');
			i++;
		}
		// Rpn::printS();
		// std::cout << std::endl;
		if (isOp(str[i]))
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(calc(i, a, b));
		}
		i++;
		// Rpn::printS();
		// std::cout << std::endl;

	}
}

int Rpn::calc(int i, int a, int b)
{
	if (str[i] == '-')
		return (b - a);
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
	std::stack<int> bis(s);

	while (!bis.empty())
	{
		std::cout << bis.top() << std::endl;
		bis.pop();
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:21:28 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/08 17:55:12 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include <stack>

class Rpn
{
private:
	std::string str;
	std::stack<int> s;
	int	isOp(char c);
public:
	Rpn(int argc, char *argv);
	~Rpn();
	Rpn(const Rpn & r);

	Rpn & operator=(const Rpn & r);

	void 		addNbrs(void);
	void		check(void);
	void		printS(void)const;
	int 		calc(int i, int a, int b);
	std::string getStr(void)const;	

	class WrongArgException : public std::exception
	{
		virtual const char *what() const throw()
		{return ("error : bad argument !");}
	};
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:55:31 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/07 14:08:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int	main(void)
{
	{
		MutantStack<int> a;
		std::cout << "--- test stack member functions ---" << std::endl;
		
		a.push(11);
		a.push(10);
		
		std::cout << a.top() << std::endl;
		
		a.pop();
		
		std::cout << a.top() << std::endl;
		
		a.push(12);
		a.push(13);
		a.push(14);

		std::cout << "----- ITERATOR -------" << std::endl;
		std::cout << "top=" << a.top()<<std::endl;
		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator ite = a.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "--------" << std::endl;
		std::stack<int> s(a);
		std::cout << s.top() << std::endl;
	}
/*	{
		std::list<int> a;
		std::cout << "--- test stack member functions ---" << std::endl;
		
		a.push_back(11);
		a.push_back(10);
		
		std::cout << a.front() << std::endl;
		
		a.push_back(11);
		a.push_back(12);
		a.push_back(13);

		std::cout << "----- ITERATOR -------" << std::endl;
		std::list<int>::iterator it = a.begin();
		std::list<int>::iterator ite = a.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}*/
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:22:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/29 20:28:48 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <iterator>
#include <vector>

PmergeMe::PmergeMe(char **arg)
{
	checker(arg);
	printSeq(arg);
	addVect(arg);
}

PmergeMe::~PmergeMe(void)
{
}

// PmergeMe::PmergeMe(const PmergeMe & p)
// {
// 	*this = p;
// }

// PmergeMe & PmergeMe::operator=(const PmergeMe & p)
// {
// 	return *this;
// }
void	PmergeMe::checker(char **arg)
{
	int i = 1;
	int j;
	while (arg[i])
	{
		j = 0;
		if (arg[i][0] == '-')
			throw ErrorException();
		while (arg[i][j])
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				throw ErrorException();
			j++;
		}
		i++;
	}
	//check big numbers?
}

void	PmergeMe::printSeq(char **argv)
{
	int i = 1;

	std::cout << "Before: ";
	while (argv[i])
	{
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

void	PmergeMe::addVect(char **argv)
{
	int i = 1;
	while (argv[i])
	{
		x.push_back(atoi(argv[i]));
		i++;
	}
	std::cout << "X : ";
	showVect(x);

	std::cout << "X swap: "<< std::endl;
	x = ft_swap(x);
	showVect(x);

	for (size_t i=0; i<x.size(); i++)
	{
		if (i%2==0)
			b.push_back(x[i]);
		else
			s.push_back(x[i]);
	}
	// ft_sort(s);
	// ft_sort(b);
	std::cout << "S : ";
	showVect(s);
	std::cout << "B : ";
	showVect(b);
}

std::vector<int>	PmergeMe::ft_swap(std::vector<int> x)
{
	std::vector<int>::iterator it;
	std::vector<int>::iterator itn = x.begin();

	for (it = x.begin(); *itn && it != x.end(); it += 2)
	{
		itn = it + 1;
		if (*itn && (*it > *itn))
			std::iter_swap(it, itn);
	}	
	return x;
}

void	PmergeMe::showVect(std::vector<int> vect)const
{
	for(size_t i=0; i<vect.size(); i++)
			std::cout << "["<<vect[i]<<"]";
	std::cout << std::endl;
}

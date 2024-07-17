/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:22:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/17 19:40:33 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
		vectA.push_back(atoi(argv[i]));
		i++;
	}
	std::cout << "VectorA : ";
	for (size_t i = 0; i < vectA.size(); i++)
		std::cout << "[" << vectA[i] << "]";
	std::cout << std::endl;
}
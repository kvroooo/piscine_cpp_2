/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:58:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/17 19:36:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <exception>
#include <iostream>
#include <cstdlib>
#include <vector>

class PmergeMe
{
private:
	std::vector<int> vectA;

public:
	PmergeMe(char **arg);
	~PmergeMe(void);
	PmergeMe(const PmergeMe & p);

	PmergeMe & operator=(const PmergeMe & p);

	void		checker(char **arg);
	void		printSeq(char **argv);
	void		addVect(char **argv);
	class ErrorException : public std::exception
	{
		virtual const char * what() const throw()
		{return ("error");}
	};
};
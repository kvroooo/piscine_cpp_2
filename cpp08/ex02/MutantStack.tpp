/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:53:09 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/01 17:49:32 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack<T>::MutantStack(const MutantStack<T> & m)
{
	std::cout << "copy constructor called !" << std::endl;
}

MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> & m)
{
	std::cout << "copy assignment operator called !" << std::endl;
	(void)m;
	return *this;
}

template <typename T>
T & MutantStack<T>::top(void)const
{
	std::cout << _s.top() << std::endl;
}


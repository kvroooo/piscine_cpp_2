/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:55:31 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/21 15:12:19 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int	main(void)
{
	std::stack<char> a;
	a.push('m');
	a.push('a');
	a.push('s');

	while (!a.empty())
	{
		std::cout << a.top() << " ";
		a.pop();
	}
}
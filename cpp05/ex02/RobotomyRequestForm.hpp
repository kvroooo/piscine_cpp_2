/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:05:38 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:11:09 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "colors.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & r);

	RobotomyRequestForm & operator=(const RobotomyRequestForm & r);

	std::string	getTarget(void) const;
	virtual void	execute(const Bureaucrat & executor) const;
};
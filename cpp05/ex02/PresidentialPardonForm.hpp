/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:25:24 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:13:05 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm & p);
	PresidentialPardonForm(std::string target);

	PresidentialPardonForm & operator=(const PresidentialPardonForm & p);

	std::string 	getTarget(void) const;
	virtual void	execute(const Bureaucrat & executor) const;
};
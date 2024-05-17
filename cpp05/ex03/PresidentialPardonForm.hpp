/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:25:24 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/03 16:43:49 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
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
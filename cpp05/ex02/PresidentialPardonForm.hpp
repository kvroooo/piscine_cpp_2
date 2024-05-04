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

#include "AForm.hpp"

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

	std::string getTarget(void) const;
	void		ft_forgive(int sign, int exec) const;

};
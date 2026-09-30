/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 00:47:41 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/30 16:06:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Presidential Pardon", 25, 5)
	, _target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("Presidential Pardon", 25, 5)
	, _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
	: AForm(src)
	, _target(src._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
	if (this != &src) {
		AForm::operator=(src);
		_target = src._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	// try {
		AForm::check_clearance(executor);
		std::cout << executor.get_name()
			<< " has been pardoned by Zaphod Beeblebrox.\n";
	// } catch (std::exception& e) {
	// 	std::cout << RED
	// 		<< "Cannot execute " << AForm::get_name() 
	// 		<< ": " << e.what()
	// 		<< "\n" << RST; 
	// }
}
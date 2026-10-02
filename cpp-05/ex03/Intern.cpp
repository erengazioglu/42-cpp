/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:01:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/02 19:14:34 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern() {
	_forms["Presidential Pardon"] = new PresidentialPardonForm();
	_forms["Shrubbery Creation"] = new ShrubberyCreationForm();
	_forms["Robotomy Request"] = new RobotomyRequestForm();
}

Intern::Intern(const Intern& src) {
	std::map<std::string, AForm*>::const_iterator it;
	for (it = src._forms.begin(); it != src._forms.end(); ++it)
		_forms[it->first] = it->second->clone();
}

Intern::~Intern() {
	std::map<std::string, AForm*>::const_iterator it;
	for (it = _forms.begin(); it != _forms.end(); ++it)
		delete it->second;
}

Intern& Intern::operator=(const Intern& src) {
	(void) src;
	return *this;
}

AForm* Intern::makeForm(const std::string& form, const std::string& target) const {
	std::map<std::string, AForm*>::const_iterator it = _forms.find(form);
	if (it != _forms.end()) {
		AForm* new_form = it->second->clone();
		new_form->set_target(target);
		return new_form;
	}
	std::cerr << RED 
		<< "Form \"" << form
		<< "\" doesn't exist.\n" << RST; 
	return NULL;
}
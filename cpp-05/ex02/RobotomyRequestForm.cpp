/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:00:35 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/30 16:08:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("Robotomy Request", 72, 45)
	, _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("Robotomy Request", 72, 45)
	, _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
	: AForm(src)
	, _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {
	if (this != &src) {
		AForm::operator=(src);
		_target = src._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	// try {
		AForm::check_clearance(executor);
		std::cout << "* Drilling noises *\n";
		if (std::rand() % 2 == 0)
			std::cout << _target << " has been robotomized successfully.\n";
		else
			std::cout << "Robotomy of " << _target << " failed.\n";
	// } catch (std::exception& e) {
	// 	std::cout << RED
	// 		<< "Cannot execute " << AForm::get_name() 
	// 		<< ": " << e.what()
	// 		<< "\n" << RST; 
	// }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:39:47 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 18:52:33 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
	: _name("")
	, _sign_clearance(150)
	, _exec_clearance(150) {}

Form::Form(const Form& src) 
	: _name(src._name)
	, _sign_clearance(src._sign_clearance)
	, _exec_clearance(src._exec_clearance) {}

Form::Form(const std::string& name) 
	: _name(name) 
	, _sign_clearance(150)
	, _exec_clearance(150) {}

Form::Form(const std::string& name, int sign, int exec) : _name(name) {
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	_sign_clearance = sign;
	_exec_clearance = exec;
}

Form::~Form() {}

Form& Form::operator=(const Form& src) {
	if (this != &src) {
		_sign_clearance = src._sign_clearance;
		_exec_clearance = src._exec_clearance;
	}
	return *this;
}

const std::string& Form::get_name(void) const {
	return _name;
}

int Form::get_sign_clearance(void) const {
	return _sign_clearance;
}

int Form::get_exec_clearance(void) const {
	return _exec_clearance;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form grade too high (must be 1-150).";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form grade too low (must be 1-150).";
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	return os << "Form " 	<< obj.get_name() 
		<< ", requires " 	<< obj.get_sign_clearance()
		<< " to sign, "		<< obj.get_exec_clearance()
		<< " to execute.\n";
}

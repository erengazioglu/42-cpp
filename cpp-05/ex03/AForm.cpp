/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:39:47 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 23:29:22 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() 
	: _name("")
	, _is_signed(false)
	, _sign_clearance(150)
	, _exec_clearance(150)
	{}

AForm::AForm(const AForm& src) 
	: _name(src._name)
	, _is_signed(src._is_signed)
	, _sign_clearance(src._sign_clearance)
	, _exec_clearance(src._exec_clearance)
	{}

AForm::AForm(const std::string& name) 
	: _name(name) 
	, _is_signed(false)
	, _sign_clearance(150)
	, _exec_clearance(150) 
	{}

AForm::AForm(const std::string& name, int sign, int exec) 
	: _name(name) 
	, _is_signed(false) {
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	_sign_clearance = sign;
	_exec_clearance = exec;
}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& src) {
	if (this != &src) {
		_sign_clearance = src._sign_clearance;
		_exec_clearance = src._exec_clearance;
		_is_signed = src._is_signed;
	}
	return *this;
}

void AForm::beSigned(const Bureaucrat& b) {
	if (_is_signed)
		throw AlreadySignedException();
	if (_sign_clearance < b.get_grade())
		throw GradeTooHighException();
	_is_signed = true;
}

const std::string& AForm::get_name(void) const {
	return _name;
}

int AForm::get_sign_clearance(void) const {
	return _sign_clearance;
}

int AForm::get_exec_clearance(void) const {
	return _exec_clearance;
}

void AForm::check_clearance(const Bureaucrat& executor) const {
	if (executor.get_grade() > _exec_clearance)
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade too low";
}

const char* AForm::AlreadySignedException::what() const throw() {
	return "form is already signed";
}

const char* AForm::InvalidFileException::what() const throw() {
	return "couldn't open file";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	return os << "AForm " 	<< obj.get_name() 
		<< ", requires " 	<< obj.get_sign_clearance()
		<< " to sign, "		<< obj.get_exec_clearance()
		<< " to execute.\n";
}

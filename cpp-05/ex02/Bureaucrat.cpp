/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:11:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/30 16:01:38 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : 
	_name(""),
	_grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name)
	: _name(name)
	, _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : 
	_name(src._name),
	_grade(src._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	if (this != &src) {
		_grade = src._grade;
	}
	return *this;
}

const std::string& Bureaucrat::get_name() const {
	return _name;
}
int Bureaucrat::get_grade() const {
	return _grade;
}
void Bureaucrat::grade_up() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade -= 1;
}
void Bureaucrat::grade_down() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade += 1;
}

void Bureaucrat::signForm(AForm& AForm) {
	try {
		AForm.beSigned(*this);
		std::cout << _name 
			<< " signed " << AForm.get_name() << ".\n";
	} catch (const AForm::GradeTooHighException&) {
		std::cout << RED
			<< _name << " couldn't sign "
			<< AForm.get_name()
			<< " because the AForm's grade is too high."
			<< RST << "\n";
	} catch (const AForm::AlreadySignedException&) {
		std::cout << RED
			<< _name << " couldn't sign "
			<< AForm.get_name()
			<< " because it is already signed."
			<< RST << "\n";
	} catch (const std::exception& e) {
		std::cout << RED 
			<< _name << " couldn't sign "
			<< AForm.get_name() << " because "
			<< e.what() << RST << "\n";
	}
}

void Bureaucrat::executeForm(const AForm& form) {
	try {
		form.execute(*this);
	} catch (std::exception& e) {
		std::cout << RED
			<< "Cannot execute " << form.get_name() 
			<< ": " << e.what()
			<< "\n" << RST; 
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high (must be 1-150).";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low (must be 1-150).";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os	<< obj.get_name() 
		<< ", bureaucrat grade "
		<< obj.get_grade();
    return os;
}
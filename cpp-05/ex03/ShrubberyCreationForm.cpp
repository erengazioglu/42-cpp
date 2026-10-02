/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:11:44 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/02 19:07:16 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

void draw_shrub(std::ofstream &f) {
	int roll = std::rand() % 2;
	if (roll == 0) {
		f	<< "    .~~~.                   "	<< "\n"
			<< "  .'     '.                 "	<< "\n"
			<< " (         )                "	<< "\n"
			<< "(           )            /\\ "	<< "\n"
			<< " '._     _.'            /  \\"	<< "\n"
			<< "    |   |                || "	<< "\n"
			<< "    |___|       /\\          "	<< "\n"
			<< "               /  \\         "	<< "\n"
			<< "                ||          "	<< "\n";
	} else if (roll == 1) {
		f	<< " /\\       /\\         /\\     "	<< "\n"
			<< "/  \\     /  \\       /  \\    "	<< "\n"
			<< " ||       ||    .~~~~.|     "		<< "\n"
			<< " ||       ||   (      )     "		<< "\n"
			<< "       /\\     (        )    "		<< "\n"
			<< "      /  \\    '._    _.'    "		<< "\n"
			<< "       ||        |  |       "		<< "\n"
			<< "       ||        |__|       "		<< "\n";
	} else {
		f	<< "   .~~~~.                   " << "\n"
			<< "  (      )        .~~~.     " << "\n"
			<< " (        )     .'     '.   " << "\n"
			<< " '._    _.'    (         )  " << "\n"
			<< "    |  |      (           ) " << "\n"
			<< "    |__|       '._     _.'  " << "\n"
			<< "                  |   |     " << "\n"
			<< "                  |___|     " << "\n";
	}
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery Creation", 145, 137)
	, _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("Shrubbery Creation", 145, 137)
	, _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
	: AForm(src)
	, _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
	if (this != &src) {
		AForm::operator=(src);
		_target = src._target;
	}
	return *this;
}

void ShrubberyCreationForm::set_target(const std::string& target) {
	_target = target;
}

AForm* ShrubberyCreationForm::clone() const {
	return new ShrubberyCreationForm(*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	AForm::check_clearance(executor);
	std::string fn = _target + "_shrubbery";
	std::ofstream f_out(fn.c_str());
	if (!f_out.is_open())
		throw AForm::InvalidFileException();
	draw_shrub(f_out);
	f_out.close();
	std::cout << executor.get_name()
		<< " successfully generated " << fn << ".\n";
}

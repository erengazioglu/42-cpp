/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:11:44 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/02 16:03:35 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

// bool	open_read(int argc, char **argv, std::ifstream &f_in) {
// 	if (argc != 4) {
// 		std::cout << RED << "Usage: ./sedpp <filename> <s1> <s2>\n" << RST;
// 		return false;
// 	}
// 	if (argv[1][0] == '\0') {
// 		std::cout << RED << "Filename cannot be empty.\n" << RST;
// 		return false;
// 	}
// 	f_in.open(argv[1]);
// 	if (!f_in.good()) {
// 		std::cout << RED << "File can't be read. Does it exist?\n" << RST;
// 		return false;
// 	}
// 	return true;
// }

// bool	open_write(int argc, char **argv, std::ofstream &f_out) {
// 	(void) argc;
// 	std::string f_name(argv[1]);
// 	f_name += ".replace";
// 	f_out.open(f_name.c_str());
// 	if (!f_out.is_open()) {
// 		std::cout << RED << "Couldn't create " << f_name << ", check file permissions.\n" << RST;
// 		return false;
// 	}
// 	return true;
// }

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

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	AForm::check_clearance(executor);
	std::string fn = _target + "_shrubbery";
	std::ofstream f_out(fn.c_str());
	if (!f_out.is_open())
		throw AForm::InvalidFileException();
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 18:53:17 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void tests_ex00() {
	try {
		std::cout << CYN << "Trying to create Bureaucrat(Pompy, 0)\n" << RST;
		Bureaucrat b("Pompy", 0);
		std::cout << b;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to create Bureaucrat(Pompy, 151)\n" << RST;
		Bureaucrat b("Pompy", 151);
		std::cout << b;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to decrement Bureaucrat(Pompy, 150)\n" << RST;
		Bureaucrat b("Pompy", 149);
		b.grade_down();
		std::cout << b;
		b.grade_down();
		std::cout << b;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to increment Bureaucrat(Pompy, 1)\n" << RST;
		Bureaucrat b("Pompy", 2);
		b.grade_up();
		std::cout << b;
		b.grade_up();
		std::cout << b;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
}

void tests_ex01() {
	try {
		std::cout << CYN << "\n--\nTrying to create Form(Arrest warrant, 50, 100)\n" << RST;
		Form form("Arrest warrant", 50, 100);
		std::cout << form;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to copy Form(Arrest warrant, 50, 100)\n" << RST;
		Form original("Arrest warrant", 50, 100);
		Form copy(original);
		std::cout << copy;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to assign Form(Arrest warrant, 50, 100)\n" << RST;
		Form original("Arrest warrant", 50, 100);
		Form assigned("Copied warrant");
		assigned = original;
		std::cout << assigned;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to create Form with sign grade 0\n" << RST;
		Form form("Arrest warrant", 0, 100);
		std::cout << form;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to create Form with execution grade 151\n" << RST;
		Form form("Arrest warrant", 100, 151);
		std::cout << form;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
}

int main() {

	tests_ex00();
	tests_ex01();
	return 0;
}

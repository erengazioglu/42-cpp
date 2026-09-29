/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 23:34:03 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void tests_ex01_ctors() {
	try {
		std::cout << CYN << "\n--\nTrying to create AForm(Arrest warrant, 50, 100)\n" << RST;
		AForm AForm("Arrest warrant", 50, 100);
		std::cout << AForm;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to copy AForm(Arrest warrant, 50, 100)\n" << RST;
		AForm original("Arrest warrant", 50, 100);
		AForm copy(original);
		std::cout << copy;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to assign AForm(Arrest warrant, 50, 100)\n" << RST;
		AForm original("Arrest warrant", 50, 100);
		AForm assigned("Copied warrant");
		assigned = original;
		std::cout << assigned;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to create AForm with sign grade 0\n" << RST;
		AForm AForm("Arrest warrant", 0, 100);
		std::cout << AForm;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	try {
		std::cout << CYN << "\n--\nTrying to create AForm with execution grade 151\n" << RST;
		AForm AForm("Arrest warrant", 100, 151);
		std::cout << AForm;
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
}

void tests_ex01_signing() {
	Bureaucrat high("Eraimon", 10);
	Bureaucrat low("Tanaka", 120);
	
	AForm classified("Nuclear program", 1, 1);
	AForm sensitive("Epstein files", 15, 5);
	AForm transparent("Tax AForm", 130, 100);

	std::cout << YEL << "---\n" << low << ", signing AForms:\n" << RST;
	low.signAForm(transparent);
	low.signAForm(sensitive);
	low.signAForm(classified);
	std::cout << YEL << "---\n" << high << ", signing AForms:\n" << RST;
	high.signAForm(transparent);
	high.signAForm(sensitive);
	high.signAForm(classified);

}


int main() {

	// tests_ex00();
	// tests_ex01_ctors();
	tests_ex01_signing();
	return 0;
}

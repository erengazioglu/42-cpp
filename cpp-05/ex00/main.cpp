/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/04 18:25:11 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
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
	return 0;
}

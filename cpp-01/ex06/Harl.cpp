/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:56:48 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 16:16:27 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
	std::cout << "This is the 3rd time I'm contacting you for a " \
	<< CYN << "debug" << RST << " and I want a refund.\n";
}

void Harl::info(void) {
	std::cout << "I was not correctly " << CYN << "informed" \
	<< RST << " regarding the subject PDF, and it's not my fault.\n";
}

void Harl::warning(void) {
	std::cout << "I'm " << CYN << "warning" << RST \
	<< " you, if you don't get me your manager, I will contact my lawyer.\n";
}

void Harl::error(void) {
	std::cout << "These " << CYN << "errors" << RST \
	<< " are getting out of control, and I need you to do something about it.\n";
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "Complaining by " << CYN << "default" << RST << " gnegnegngnegnenge...\n";
}

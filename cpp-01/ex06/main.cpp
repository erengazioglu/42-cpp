/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:57:34 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/21 10:08:37 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	filter(Harl& harl, std::string input) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int level = -1;
	for (int i = 0; i < 4; i++) {
		if (levels[i] == input){
			level = i;
			break;
		}
	}
	switch (level) {
		case 0:
			std::cout << CYN << "[DEBUG]   " << RST;
			harl.complain("DEBUG");
			// fall through
		case 1:
			std::cout << CYN << "[INFO]    " << RST;
			harl.complain("INFO");
			// fall through
		case 2:
			std::cout << CYN << "[WARNING] " << RST;
			harl.complain("WARNING");
			// fall through
		case 3:
			std::cout << CYN << "[ERROR]   " << RST;
			harl.complain("ERROR");
			break;
		default:
			std::cout << CYN << "[DEFAULT] " << RST;
			harl.complain("");
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << RED << "Usage: ./harl_filter <level>\n" << RST;
		return 1;
	}
	Harl harl;
	filter(harl, argv[1]);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:57:34 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/18 18:30:24 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << RED << "Usage: ./harl <level>\n" << RST;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);

	return 0;
}

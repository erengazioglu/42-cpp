/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:52:31 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 12:53:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedpp.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << RED << "Usage: ./sedpp <filename> <s1> <s2>\n";
		return 1;
	}
	if (argv[1][0] == '\0') {
		std::cout << RED << "Filename cannot be empty.\n";
		return 1;
	}
	std::ifstream f_in(argv[1]);
	if (!f_in.good()) {
		std::cout << RED << "File can't be read. Does it exist?\n";
		return 1;
	}
	std::ostringstream f_name;
	f_name << argv[1] << ".replace";
	std::ofstream f_out(f_name.str().c_str());
	if (!f_out.is_open()) {
		std::cout << RED << "Couldn't create " << f_name.str() << ", check file permissions.\n";
		return 1;
	}
	return 0;
}
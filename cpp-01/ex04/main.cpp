/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:52:31 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/17 19:56:40 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedpp.hpp"

bool	open_read(int argc, char **argv, std::ifstream &f_in) {
	if (argc != 4) {
		std::cout << RED << "Usage: ./sedpp <filename> <s1> <s2>\n" << RST;
		return false;
	}
	if (argv[1][0] == '\0') {
		std::cout << RED << "Filename cannot be empty.\n" << RST;
		return false;
	}
	f_in.open(argv[1]);
	if (!f_in.good()) {
		std::cout << RED << "File can't be read. Does it exist?\n" << RST;
		return false;
	}
	return true;
}

bool	open_write(int argc, char **argv, std::ofstream &f_out) {
	(void) argc;
	std::string f_name(argv[1]);
	f_name += ".replace";
	f_out.open(f_name.c_str());
	if (!f_out.is_open()) {
		std::cout << RED << "Couldn't create " << f_name << ", check file permissions.\n" << RST;
		return false;
	}
	return true;
}

void	read_file(std::ifstream &f_in, std::string &str) {
	std::ostringstream 	oss;
	while (std::getline(f_in, str))
		oss << str << std::endl;
	str = oss.str();
	f_in.close();
}

int	main(int argc, char **argv) {
	std::ifstream f_in;
	std::ofstream f_out;
	if (!open_read(argc, argv, f_in))
		return (1);
	if (!open_write(argc, argv, f_out))
		return (f_in.close(), 1);
	
	std::string str;
	read_file(f_in, str);

	if (argv[2][0]) {
		std::size_t len = std::string(argv[2]).length();
		std::size_t	i = str.find(argv[2]);
		while (i != std::string::npos) {
			f_out << str.substr(0, i) << argv[3];
			str.erase(0, i + len);
			i = str.find(argv[2]);
		}
	}
	f_out << str;
	f_out.close();
	return 0;
}

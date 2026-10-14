/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:52:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/14 14:15:48 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "ScalarConverter.hpp"

// bool parse_int(const std::string& input, int)

void ScalarConverter::print(char c) {
	std::cout << std::fixed << std::setprecision(1)
		<< "char: " << c
		<< "\nint: " << static_cast<int>(c)
		<< "\nfloat: " << static_cast<float>(c) << 'f'
		<< "\ndouble: " << static_cast<double>(c) << "\n";
}

void ScalarConverter::print(int i) {
	if (i < 32 || i >= 127)
		std::cout << RED << "char: Not printable\n" << RST;
	else
		std::cout << "char: " << static_cast<char>(i) << "\n";
	std::cout << std::fixed << std::setprecision(1)
		<< "int: " << i
		<< "\nfloat: " << static_cast<float>(i) << 'f'
		<< "\ndouble: " << static_cast<double>(i) << "\n";
}

void ScalarConverter::print() {
	std::cout << RED
		<< "Input value cannot be converted.\n" << RST;
}

void ScalarConverter::print(std::string str, bool is_float) {
	std::cout << RED
		<< "char: impossible\n"
		<< "int: impossible\n" << RST
		<< "float: " << str.substr(0, str.length() - static_cast<int>(is_float)) << "f\n"
		<< "double: " << str.substr(0, str.length() - static_cast<int>(is_float));
}


// void ScalarConverter::print(float f) {
	
// }

void ScalarConverter::convert(std::string input) {
	if (input == "nan" || input == "-inf" || input == "+inf") {
		print(input, false);
		return;
	}
	if (input == "nanf" || input == "-inff" || input == "+inff") {
		print(input, true);
		return;
	}
	if (input.length() == 1 && std::isalpha(input[0])) {
		char c = input[0];
		print(c);
		return;
	}
	if (input.length() == 0) {
		print();
		return;
	}
	// if (
	// 	input.find_first_not_of("0123456789"))
	// else if (int)
	// int i = std::atoi(input.c_str());
	// print(i);
}
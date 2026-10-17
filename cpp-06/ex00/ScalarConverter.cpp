/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:52:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/17 18:57:40 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "ScalarConverter.hpp"
#include <climits>

static bool all_digits(const std::string &s, size_t from, size_t to)
{
	if (from >= to)
		return false;
	for (size_t i = from; i < to; i++)
		if (!std::isdigit(s[i]))
			return false;
	return true;
}

Type get_type(const std::string &s) {
	if (s.empty())
		return INVALID;
	if (s == "+inff" || s == "-inff" || s == "nanf")
		return SPECIAL_FLOAT;
	if (s == "+inf" || s == "-inf" || s == "nan")
		return SPECIAL_DOUBLE;
	if (s.length() == 1 && std::isalpha(s[0]))
		return CHAR;

	size_t start = (s[0] == '+' || s[0] == '-') ? 1 : 0;
	if (all_digits(s, start, s.length()))
		return INT;

	size_t dot = s.find('.');
	if (dot == std::string::npos)
		return INVALID;
	if (s[s.length() - 1] == 'f')
		return all_digits(s, start, dot) && all_digits(s, dot + 1, s.length() - 1)
			? FLOAT : INVALID;
	return all_digits(s, start, dot) && all_digits(s, dot + 1, s.length())
		? DOUBLE : INVALID;
}

void ScalarConverter::print(char c) {
	std::cout << std::fixed << std::setprecision(1)
		<< "char: " << c
		<< "\nint: " << static_cast<int>(c)
		<< "\nfloat: " << static_cast<float>(c) << 'f'
		<< "\ndouble: " << static_cast<double>(c) << "\n";
}

void ScalarConverter::print(int i) {
	if (i < 32 || i >= 127)
		std::cout << RED << "char: not printable\n" << RST;
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
		<< "double: " << str.substr(0, str.length() - static_cast<int>(is_float)) << "\n";
}

void ScalarConverter::print(double d) {
	if (d < 32 || d >= 127)
		std::cout << RED << "char: not printable\n" << RST;
	else
		std::cout << "char: " << static_cast<char>(d) << "\n";
	if (d < INT_MIN || d > INT_MAX)
		std::cout << YEL 
			<< "int: " << static_cast<int>(d) 
			<< " (overflowed)\n" << RST;
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	std::cout << std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(d) << 'f'
		<< "\ndouble: " << d << "\n";
}

void ScalarConverter::convert(std::string input) {
	switch (get_type(input)) {
		case INVALID:
			print();
			break;
		case SPECIAL_FLOAT:
			print(input, true);
			break;
		case SPECIAL_DOUBLE:
			print(input, false);
			break;
		case CHAR: {
			char c = input[0];
			print(c);
			break;
		}
		case INT: {
			double d = atof(input.c_str());
			if (d < INT_MIN || d > INT_MAX)
				print(d);
			else
				print(atoi(input.c_str()));
			break;
		}
		case FLOAT:
		case DOUBLE: {
			double d = atof(input.c_str());
			print(d);
			break;
		}
	}
}
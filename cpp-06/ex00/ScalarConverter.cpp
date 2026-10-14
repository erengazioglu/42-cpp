/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:52:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/14 12:45:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "ScalarConverter.hpp"

void ScalarConverter::print(char _c, int _i, float _f, double _d) {
	std::cout 
		<< "char: " << _c
		<< "\nint: " << _i
		<< "\nfloat: " << _f
		<< "\ndouble: " << _d << "\n";
}

void ScalarConverter::convert(std::string input) {
	char	_c;
	int		_i;
	float	_f;
	double	_d;

	if (input.length() == 1 && std::isalpha(input[0])) {
		_c = input[0];
		_i = static_cast<int>(_c);
		_d = static_cast<double>(_c);
		_f = static_cast<float>(_c);
		print(_c, _i, _f, _d);
	}
	// detect type
	// convert to said type
	// cast from said type
	// std::cout << "char: " << static_cast<char>(input) << "\n";
	// std::cout << "char: " << static_cast<char>(input) << "\n";
}
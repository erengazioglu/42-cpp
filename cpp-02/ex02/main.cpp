/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/25 15:50:31 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a(0);
	Fixed b(0.0f);
	Fixed c(-42.15f);
	Fixed d(-42);
	Fixed e(42);
	Fixed f(42.15f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "a < b:  " << ((a < b) ? "true" : "false") << std::endl;
	std::cout << "a > b:  " << ((a > b) ? "true" : "false") << std::endl;
	std::cout << "a >= b: " << ((a >= b) ? "true" : "false") << std::endl;
	std::cout << "a <= b: " << ((a <= b) ? "true" : "false") << std::endl;
	std::cout << "a == b: " << ((a == b) ? "true" : "false") << std::endl;
	std::cout << "a != b: " << ((a != b) ? "true" : "false") << std::endl;
}
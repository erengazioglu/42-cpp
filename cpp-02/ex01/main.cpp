/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/25 14:06:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( 10 ); 
	Fixed const c( 42.42f ); 
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl; 
	std::cout << "b is " << b << std::endl; 
	std::cout << "c is " << c << std::endl; 
	std::cout << "d is " << d << std::endl;

	std::cout << "(int) a: " << a.toInt() << std::endl; 
	std::cout << "(int) b: " << b.toInt() << std::endl; 
	std::cout << "(int) c: " << c.toInt() << std::endl; 
	std::cout << "(int) d: " << d.toInt() << std::endl;

	return 0;
}
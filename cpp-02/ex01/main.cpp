/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 16:36:22 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( 10 ); 
	Fixed const c( 42.42f ); 
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a: " << a << std::endl; 
	std::cout << "b: " << b << std::endl; 
	std::cout << "c: " << c << std::endl; 
	std::cout << "d: " << d << std::endl;

	std::cout << "a (as int): " << a.toInt() << std::endl; 
	std::cout << "b (as int): " << b.toInt() << std::endl; 
	std::cout << "c (as int): " << c.toInt() << std::endl; 
	std::cout << "d (as int): " << d.toInt() << std::endl;

	return 0;
}
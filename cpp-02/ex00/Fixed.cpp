/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:32 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/20 15:34:02 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << BLU << "Default constructor called\n" << RST;
	_fixed = 0;
}

Fixed::Fixed(Fixed& src) {
	std::cout << BLU << "Copy constructor called\n" << RST;
	_fixed = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << BLU << "Destructor called\n" << RST;
}

int Fixed::getRawBits(void) const {
	return _fixed;
}

void Fixed::setRawBits(int const raw) {
	_fixed = raw;
}
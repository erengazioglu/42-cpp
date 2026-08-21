/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:32 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/20 18:01:52 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << BLU << "Default constructor called\n" << RST;
	_fixed = 0;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << BLU << "Copy constructor called\n" << RST;
	_fixed = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << BLU << "Destructor called\n" << RST;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << BLU << "Copy assignment operator called\n" << RST;
	_fixed = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << MAG << "getRawBits member function called\n" << RST;
	return _fixed;
}

void Fixed::setRawBits(int const raw) {
	_fixed = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}
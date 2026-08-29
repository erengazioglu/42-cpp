/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:32 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 01:07:16 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ___
// Constructors

Fixed::Fixed() {
	std::cout << BLU << "Default constructor called\n" << RST;
	_fixed = 0;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << BLU << "Copy constructor called\n" << RST;
	_fixed = src.getRawBits();
}

Fixed::Fixed(const int i) {
	std::cout << BLU << "Int constructor called\n" << RST;
	_fixed = i * (1 << _fract);
}

Fixed::Fixed(const float f) {
	std::cout << BLU << "Float constructor called\n" << RST;
	_fixed = (int) roundf(f * (1 << _fract));
}


// ___
// Destructor

Fixed::~Fixed() {
	std::cout << BLU << "Destructor called\n" << RST;
}


// ___
// Copy operator

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << BLU << "Copy assignment operator called\n" << RST;
	_fixed = src.getRawBits();
	return *this;
}

// ___
// Comparison operators

bool	Fixed::operator<(const Fixed& f) const {
	return _fixed < f.getRawBits();
}
bool	Fixed::operator<=(const Fixed& f) const {
	return _fixed <= f.getRawBits();
}
bool	Fixed::operator>(const Fixed& f) const {
	return _fixed > f.getRawBits();
}
bool	Fixed::operator>=(const Fixed& f) const {
	return _fixed >= f.getRawBits();
}
bool	Fixed::operator==(const Fixed& f) const {
	return _fixed == f.getRawBits();
}
bool	Fixed::operator!=(const Fixed& f) const {
	return _fixed != f.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& f) const {
	return Fixed((float) (_fixed + f.getRawBits()) / (1 << _fract));
}
Fixed	Fixed::operator-(const Fixed& f) const {
	return Fixed((float) (_fixed - f.getRawBits()) / (1 << _fract));
}
Fixed	Fixed::operator*(const Fixed& f) const {
	Fixed result;
	result.setRawBits(_fixed * f.getRawBits() / (1 << _fract));
	return result;
}
Fixed	Fixed::operator/(const Fixed& f) const {
	Fixed result;
	result.setRawBits(_fixed / f.getRawBits() * (1 << _fract));
	return result;
}

// ___
// Converters

int	Fixed::toInt(void) const {
	return _fixed / (1 << _fract);
}

float	Fixed::toFloat(void) const {
	return (float) _fixed / (1 << _fract);
}


// ___
// Setget

int Fixed::getRawBits(void) const {
	return _fixed;
}

void Fixed::setRawBits(int const raw) {
	_fixed = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}
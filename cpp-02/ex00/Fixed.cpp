/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:32 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/20 15:29:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_fixed = 0;
}

Fixed::Fixed(Fixed& src) {
	(void) src;
}

Fixed::~Fixed() {
	
}

int Fixed::getRawBits(void) const {
	return _fixed;
}

void Fixed::setRawBits(int const raw) {
	_fixed = raw;
}
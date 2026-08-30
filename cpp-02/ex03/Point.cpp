/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 23:06:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 19:19:53 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// ---
// Constructors, destructors, etc
Point::Point() : _x(0), _y(0) {}

Point::Point(const Point& src) 
	: _x(src.get_x())
	, _y(src.get_y()) {
}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y) {}

Point::~Point() {}

// ---
// Setget

const Fixed& Point::get_x(void) const {
	return _x;
}
const Fixed& Point::get_y(void) const {
	return _y;
}

// ---
// Operators

Point Point::operator+(const Point& src) const {
	return Point(
		_x + src.get_x(),
		_y + src.get_y()
	);
}
Point Point::operator-(const Point& src) const {
	return Point(
		_x - src.get_x(),
		_y - src.get_y()
	);
}
int	Point::operator*(const Point& src) const {
	return (_x * src.get_y() - _y * src.get_x()).toInt();
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
	os << "(" << point.get_x() << ", " << point.get_y() << ")";
	return os;
}
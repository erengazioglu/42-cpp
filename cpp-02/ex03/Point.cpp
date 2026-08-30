/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 23:06:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 10:38:58 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point& src) 
	: _x(src.get_x())
	, _y(src.get_y()) {
}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y) {}

Point::~Point() {}

Point Point::operator+(const Point& src) const {
	return Point(
		_x + src.get_x(),
		_y + src.get_y()
	);
}
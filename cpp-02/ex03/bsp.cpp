/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 23:04:39 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 23:04:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static int	_check_side(Point const a, Point const b, Point const point) {
	int dot = (a - point) * (b - point);
	if (dot < 0)
		return -1;
	return dot > 0;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	int sides[3] = {
		_check_side(a, b, point),
		_check_side(b, c, point),
		_check_side(c, a, point)
	};
	return sides[0] == sides[1] && sides[1] == sides[2];
}

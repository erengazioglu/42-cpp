/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 22:53:14 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/29 23:17:21 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const Point&);
		Point(const Fixed& x, const Fixed& y);
		~Point();
		Point&	operator=(const Point&);
		
		const Fixed& get_x(void) const;
		const Fixed& get_y(void) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif
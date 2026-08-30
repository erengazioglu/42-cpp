/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 22:54:20 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const, Point const, Point const, Point const);

int main() {
	Point a;
	Point b(Fixed(2), Fixed(4));
	Point c(Fixed(4), Fixed(0));
	
	std::cout << bsp(a, b, c, Point(Fixed(2), Fixed(2))) << "\n";
	std::cout << bsp(a, b, c, Point(Fixed(2), Fixed(4))) << "\n";
	std::cout << bsp(a, b, c, Point(Fixed(1), Fixed(2))) << "\n";
	std::cout << bsp(a, b, c, Point(Fixed(4), Fixed(4))) << "\n";
	std::cout << bsp(a, b, c, Point(Fixed(2), Fixed(1))) << "\n";
	std::cout << bsp(a, b, c, Point(Fixed(2), Fixed(-1))) << "\n";

}
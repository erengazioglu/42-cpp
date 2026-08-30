/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 10:56:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a;
	Point b(a);
	Point c(Fixed(2), Fixed(5));
	Point d(Fixed(4.5f), Fixed(-2));
	Point e(c + d);
	Point f(c - d);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
}
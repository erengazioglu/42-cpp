/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:14:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/30 00:54:31 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
	int a = 2; 
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl; 
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl; 
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1"; 
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl; 
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl; 
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
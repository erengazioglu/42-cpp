/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:31:56 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/06 23:32:40 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main() {
	
	Array<int> intarr(5);
	intarr[0] = 42;
	std::cout << intarr[0] << '\n';
	try {
		intarr[20] = 3;
		std::cout << intarr[20] << '\n';
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	return 0;
}

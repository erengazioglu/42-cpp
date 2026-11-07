/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:50:09 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 02:19:32 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
	std::vector<int> vec(3);
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	try {
		easyFind(vec, 5);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	int& match = easyFind(vec, 3);
	std::cout << match << "\n";
	match += 5;
	std::cout << vec[2] << "\n";

	return 0;
}

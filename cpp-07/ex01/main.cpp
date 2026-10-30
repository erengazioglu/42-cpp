/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 00:54:58 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/30 01:19:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print(const char c) {
	std::cout << c << "\n";
}

void increment(int &a) {
	a++;
}

int main() {
	int		intarr[3] = {1, 2, 3};
	const char	chararr[3] = {'a', 'b', 'c'};

	iter(intarr, 3, &increment);
	iter(chararr, 3, &print);
	for (int i = 0; i < 3; i++) {
		std::cout << intarr[i] << "\n";
	}
	return 0;
}
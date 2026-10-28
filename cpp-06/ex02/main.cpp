/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:42:05 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 01:37:07 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base* generate(void) {
	switch (std::rand() % 3) {
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

int main() {
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		Base* obj = generate();
		std::cout << obj->type;
		delete obj;
	}
	std::cout << "\n";
	return 0;
}
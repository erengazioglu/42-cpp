/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:42:05 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 01:44:35 by egaziogl         ###   ########.fr       */
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

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C\n";
	else
		std::cout << "Type is something else entirely\n";
}

void identify(Base&) {
	
}

int main() {
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		Base* obj = generate();
		std::cout << obj->type << ", ";
		identify(obj);
		delete obj;
	}
	std::cout << "\n";
	return 0;
}
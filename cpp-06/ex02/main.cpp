/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:42:05 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 09:51:01 by egaziogl         ###   ########.fr       */
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

// better way is to use templates or macros
// but templates are still forbidden in "piscine c++ rules"
// and macros are frowned upon in the 42 norm
void identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "Type is A\n";
		return;
	} catch (std::bad_cast&) {}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "Type is B\n";
		return;
	} catch (std::bad_cast&) {}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "Type is C\n";
		return;
	} catch (std::bad_cast&) {}
	
	std::cout << "Type is something else entirely\n";
}

int main() {
	std::cout << GRN << "Testing randomly generated objects\n" << RST;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		Base* obj = generate();
		std::cout << obj->type << ", ";
		identify(obj);
		delete obj;
	}
	std::cout << GRN << "\nTesting references to A, B, C\n" << RST;
	A obj1; B obj2; C obj3;
	identify(obj1); identify(obj2); identify(obj3);
	return 0;
}
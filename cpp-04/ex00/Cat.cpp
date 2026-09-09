/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 16:49:28 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat") {
	std::cout << BLU << "Cat | Default constructor\n" << RST;
}

Cat::~Cat() {
	std::cout << RED << "Cat | Destructor\n" << RST;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << BLU << "Cat | Copy constructor\n" << RST;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		Animal::operator=(src);
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meowwwwww~\n";
}
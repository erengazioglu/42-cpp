/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:22 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 16:54:51 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog") {
	std::cout << BLU << "Dog | Default constructor\n" << RST;
}

Dog::~Dog() {
	std::cout << RED << "Dog | Destructor\n" << RST;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout << BLU << "Dog | Copy constructor\n" << RST;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		Animal::operator=(src);
	return *this;
}

void	Dog::makeSound(void) {
	std::cout << "WOOF!\n";
}

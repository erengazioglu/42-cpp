/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:22 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 09:31:55 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog") {}

Dog::~Dog() {}

Dog::Dog(const Dog& src) : Animal(src) {}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		Animal::operator=(src);
	return *this;
}

void	Dog::makeSound(void) {
	std::cout << "WOOF!\n";
}
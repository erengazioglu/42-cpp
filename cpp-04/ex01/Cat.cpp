/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 14:05:42 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat"), _brain(new Brain) {
	std::cout << BLU << "Cat | Default constructor\n" << RST;
}

Cat::~Cat() {
	std::cout << RED << "Cat | Destructor\n" << RST;
	delete _brain;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << BLU << "Cat | Copy constructor\n" << RST;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		Animal::operator=(src);
	std::cout << BLU << "Cat | Copy assignment\n" << RST;
	return *this;
}

void	Cat::makeSound(void) {
	std::cout << "Meowwwwww~\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 09:31:39 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat") {}

Cat::~Cat() {}

Cat::Cat(const Cat& src) : Animal(src) {}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		Animal::operator=(src);
	return *this;
}

void	Cat::makeSound(void) {
	std::cout << "Meowwwwww~\n";
}
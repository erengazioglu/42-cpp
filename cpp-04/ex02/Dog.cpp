/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:22 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 17:27:50 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog"), _brain(new Brain)  {
	std::cout << BLU << "Dog | Default constructor\n" << RST;
}

Dog::~Dog() {
	std::cout << RED << "Dog | Destructor\n" << RST;
	delete _brain;
}

Dog::Dog(const Dog& src) : Animal(src), _brain(new Brain) {
	for (int i = 0; i < 100; i++) {
		_brain->ideas[i] = src._brain->ideas[i];
	}
	std::cout << BLU << "Dog | Copy constructor\n" << RST;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src) {
		Animal::operator=(src);
		for (int i = 0; i < 100; i++) {
			_brain->ideas[i] = src._brain->ideas[i];
		}
	}
	std::cout << BLU << "Dog | Copy assignment\n" << RST;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "WOOF!\n";
}

void	Dog::readThoughts(void) const {
	for (int i = 0; i < 100; i++) {
		if (_brain->ideas[i].size())
			std::cout << "Idea " 
			<< i << ": \""
			<< _brain->ideas[i] << "\"\n";
	}
}

void	Dog::setIdea(int i, std::string idea) {
	if (i < 0 || i >= 100) return ;
	_brain->ideas[i] = idea;
}
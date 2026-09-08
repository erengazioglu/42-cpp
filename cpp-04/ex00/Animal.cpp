/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 10:14:53 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("animal") {}
Animal::~Animal() {}

Animal::Animal(std::string type) : _type(type) {}

Animal::Animal(const Animal& src) : _type(src._type) {}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string	Animal::getType(void) {
	return _type;
}

void Animal::announceType(void) {
	std::ostringstream oss;
	oss << CYN << "[" << _type << "]" << RST;
	std::cout << std::left << std::setw(20) << oss.str();
}

void	Animal::makeSound(void) {
	std::cout << "** generic musings of a generic " << _type << " **\n";
}
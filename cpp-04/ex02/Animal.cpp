/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 17:27:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("animal") {
	std::cout << BLU << "Animal | Default constructor\n" << RST;
}
Animal::~Animal() {
	std::cout << RED << "Animal | Destructor\n" << RST;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << BLU << "Animal | Custom constructor\n" << RST;
}

Animal::Animal(const Animal& src) : _type(src._type) {
	std::cout << BLU << "Animal | Copy constructor\n" << RST;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		this->_type = src._type;
	std::cout << BLU << "Animal | Copy assignment\n" << RST;
	return *this;
}

std::string	Animal::getType(void) const {
	return _type;
}

void Animal::announceType(void) const {
	std::ostringstream oss;
	oss << CYN << "[" << _type << "]" << RST;
	std::cout << std::left << std::setw(20) << oss.str();
}

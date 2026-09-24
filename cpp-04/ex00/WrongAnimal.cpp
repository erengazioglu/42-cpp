/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 13:23:24 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("wanimal") {
	std::cout << BLU << "WrongAnimal | Default constructor\n" << RST;
}
WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal | Destructor\n" << RST;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << BLU << "WrongAnimal | Custom constructor\n" << RST;
}
WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type) {
	std::cout << BLU << "WrongAnimal | Copy constructor\n" << RST;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void 	WrongAnimal::announceType(void) const {
	std::ostringstream oss;
	oss << RED << "[" << _type << "]" << RST;
	std::cout << std::left << std::setw(20) << oss.str();
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "** this " << _type << " sounds... wrong **\n";
}
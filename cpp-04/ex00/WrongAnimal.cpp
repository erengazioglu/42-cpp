/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 17:21:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("animal") {}
WrongAnimal::~WrongAnimal() {}
WrongAnimal::WrongAnimal(std::string type) : _type(type) {}
WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type) {}

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
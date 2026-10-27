/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:02:58 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 00:20:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << BLU << "Serializer | Default constructor\n" << RST;
}

Serializer::Serializer(const Serializer& src) {
	std::cout << BLU << "Serializer | Copy constructor\n" << RST;
}

Serializer::~Serializer() {
	std::cout << RED << "Serializer | Destructor\n" << RST;
}

Serializer& Serializer::operator=(const Serializer& src) {
	std::cout << BLU << "Serializer | Copy assignment\n" << RST;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
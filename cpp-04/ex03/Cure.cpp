/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:08:44 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/17 22:54:22 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(){
	std::cout << BLU << "Cure | Default constructor\n" << RST;
}

Cure::Cure(const Cure& src) {
	std::cout << BLU << "Cure | Copy constructor\n" << RST;
}

Cure::~Cure() {
	std::cout << RED << "Cure | Destructor\n" << RST;
}

Cure& Cure::operator=(const Cure& src) {
	std::cout << BLU << "Cure | Copy assignment\n" << RST;
	return *this;
}
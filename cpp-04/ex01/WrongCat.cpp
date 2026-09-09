/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 17:22:38 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("cat") {}
WrongCat::~WrongCat() {}
WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this != &src)
		WrongAnimal::operator=(src);
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Mooo?\n";
}
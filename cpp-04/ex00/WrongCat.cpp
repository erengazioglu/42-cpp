/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:16 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 09:45:57 by egaziogl         ###   ########.fr       */
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

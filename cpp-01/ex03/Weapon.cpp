/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:49:37 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 00:43:05 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	_type = "undefined";
}

Weapon::Weapon(std::string type) {
	_type = type;
}

std::string Weapon::getType() {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}
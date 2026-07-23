/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:47:04 by egaziogl          #+#    #+#             */
/*   Updated: 2026/07/23 13:54:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "";
}

void Zombie::set_name(std::string name) {
	_name = name;
}
std::string Zombie::get_name(void) {
	return _name;
}

void Zombie::announce(void) {
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ...\n";
}
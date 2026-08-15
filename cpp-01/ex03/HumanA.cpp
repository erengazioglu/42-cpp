/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:53:57 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 18:19:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA() {
	_name = "";
	_weapon = Weapon("default");
}

HumanA::HumanA(std::string name, Weapon &weapon) {
	_name = name;
	_weapon = weapon;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:54:33 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 01:43:17 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

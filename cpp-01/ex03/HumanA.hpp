/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:54:01 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 01:32:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
	private:
		std::string	_name;
		Weapon&		_weapon;
};

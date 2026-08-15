/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:54:33 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 18:08:41 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		void	attack(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

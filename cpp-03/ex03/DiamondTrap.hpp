/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:00:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 16:04:35 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		void whoAmI();
	private:
		std::string _name;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:20:47 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 15:23:53 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void highFivesGuys();
};

#endif
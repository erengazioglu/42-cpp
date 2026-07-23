/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:44:09 by egaziogl          #+#    #+#             */
/*   Updated: 2026/07/23 14:00:45 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie();
		void	announce(void);
		void	set_name(std::string name);
		std::string	get_name(void);

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:44:09 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 17:25:26 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

class Zombie {
	public:
		Zombie();
		~Zombie();
		void		announce(void);
		std::string	get_name(void);
		void		set_name(std::string name);

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
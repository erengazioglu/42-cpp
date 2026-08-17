/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:46:55 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/17 18:55:02 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# pragma once
# include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		const std::string& getType(void);
		void		setType(std::string type);
	private: 
		std::string _type;
};

#endif
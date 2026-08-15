/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:46:55 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 01:45:23 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		const std::string& getType(void);
		void		setType(std::string type);
	private: 
		std::string _type;
};
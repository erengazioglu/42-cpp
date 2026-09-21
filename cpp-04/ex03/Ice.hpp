/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:08:48 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 10:55:04 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "Common.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice&);
		~Ice();
		Ice& operator=(const Ice&);
		Ice* clone() const;
		void use(ICharacter& target);

};

#endif
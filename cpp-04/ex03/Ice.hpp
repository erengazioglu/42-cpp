/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:08:48 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/16 18:48:13 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "Common.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice&);
		~Ice();
		Ice& operator=(const Ice&);
};

#endif
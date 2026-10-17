/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:03:29 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/17 19:03:53 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Common.hpp"

class Serializer {
	public:
		Serializer();
		Serializer(const Serializer&);
		~Serializer();
		Serializer& operator=(const Serializer&);
};

#endif
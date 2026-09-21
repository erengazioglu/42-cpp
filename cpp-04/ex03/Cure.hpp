/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:08:41 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 10:55:08 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "Common.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure&);
		~Cure();
		Cure& operator=(const Cure&);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
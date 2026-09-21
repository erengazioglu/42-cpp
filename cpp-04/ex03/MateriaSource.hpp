/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:21:30 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 10:18:06 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "Common.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource&);

		void learnMateria(AMateria* src);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* _learned[4];
};

#endif
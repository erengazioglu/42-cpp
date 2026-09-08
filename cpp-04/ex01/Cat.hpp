/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:20 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 09:30:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat&);
		~Cat();
		Cat& operator=(const Cat&);
		void makeSound(void);

};

#endif
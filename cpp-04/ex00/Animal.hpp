/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:12 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 09:28:49 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal {
	public:
		Animal();
		~Animal();
		Animal(const Animal&);
		Animal(std::string type);
		Animal& operator=(const Animal&);
		void makeSound(void);

	protected:
		std::string _type;
};

#endif
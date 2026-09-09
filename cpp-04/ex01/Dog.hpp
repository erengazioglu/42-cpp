/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:26 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 17:31:58 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog&);
		~Dog();
		Dog& operator=(const Dog&);
		void makeSound(void)		const;
		void readThoughts(void)		const;
		void setIdea(int i, std::string idea);
	private:
		Brain* _brain;
};

#endif
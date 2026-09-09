/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:12 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 16:48:17 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

class Animal {
	public:
		Animal();
		~Animal();
		Animal(const Animal&);
		Animal(std::string type);
		Animal& operator=(const Animal&);
		
		std::string	getType(void)	const;
		void announceType(void)		const;
		void makeSound(void)		const;

	protected:
		std::string _type;
};

#endif
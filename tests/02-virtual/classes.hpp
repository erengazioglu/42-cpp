/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:03:32 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 17:28:03 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

class Base {
	public:
		Base();
		~Base();
		void increment(void);
		static int	static_count;
		int			public_count;

	protected:
		std::string _protected_name;
		int			_protected_count;
	
	private:
		std::string _private_name;
		int			_private_count;
};

class Left : public Base {
	public:
		Left();
		~Left();
};

class Right : public Base {
	public:
		Right();
		~Right();
};

class Both : public Left, public Right {
	public:
		Both();
		~Both();
};

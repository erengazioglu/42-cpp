/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:34 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 16:29:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(const Fixed& src);
	private:
		static const int _fract = 8;
		int _fixed;
};

#endif
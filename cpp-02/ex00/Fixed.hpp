/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:34 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/20 15:26:15 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
	public:
		Fixed();
		Fixed(Fixed& src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		static const int _fract = 8;
		int _fixed;
};

#endif
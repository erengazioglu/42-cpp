/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:34 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/30 10:31:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# pragma once
# include <iostream>
# include <cmath>

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
		Fixed(const Fixed&);
		Fixed(const int);
		Fixed(const float);
		~Fixed();

		Fixed&	operator=(const Fixed& src);
		bool	operator<(const Fixed&)		const;
		bool	operator>(const Fixed&)		const;
		bool	operator>=(const Fixed&)	const;
		bool	operator<=(const Fixed&)	const;
		bool	operator==(const Fixed&)	const;
		bool	operator!=(const Fixed&)	const;
		Fixed	operator+(const Fixed&)		const;
		Fixed	operator-(const Fixed&)		const;
		Fixed	operator*(const Fixed&)		const;
		Fixed	operator/(const Fixed&)		const;
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed&, Fixed&);
		static Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&	max(Fixed&, Fixed&);
		static Fixed&	max(const Fixed&, const Fixed&);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		static const int _fract = 8;
		int _fixed;
};

// represents:
// 00000000 00000000 00000000 . 00000000

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
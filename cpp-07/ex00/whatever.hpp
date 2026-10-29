/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:46:07 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/29 17:20:02 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
T max(T a, T b) {
	return a >= b ? a : b;
}

template <typename T>
T min(T a, T b) {
	return a <= b ? a : b;
}

template <typename T>
void swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

#endif
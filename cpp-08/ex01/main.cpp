/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:50:25 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 17:27:32 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	Span sp;
	sp.addNumber(40);
	sp.addNumber(10);
	sp.addNumber(20);
	std::cout << sp.longestSpan() << "\n";
	std::cout << sp.shortestSpan() << "\n";
	return 0;
}

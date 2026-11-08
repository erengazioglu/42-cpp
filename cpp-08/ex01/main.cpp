/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:50:25 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/08 01:04:21 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	srand(time(NULL));
	try {
		Span sp;
		sp.generate(10);
		sp.print();
		std::cout 
			<< "\nLongest: " << sp.longestSpan()
			<< "\nShortest: " << sp.shortestSpan()
			<< "\n";
	} catch (std::exception& e) {
		std::cout << RED << e.what() << RST << "\n";
	}
	return 0;
}

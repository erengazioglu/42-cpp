/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:52:31 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/16 02:57:38 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedpp.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << RED << "Usage: ./sedpp <filename> <s1> <s2>\n";
		return 1;
	}
	(void) argv;
	return 0;
}
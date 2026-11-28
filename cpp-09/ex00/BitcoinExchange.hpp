/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 13:56:53 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/28 13:58:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RED "\033[31m"
#define GRN "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYN "\033[36m"
#define RST "\033[0m"

// change the container type
#include <vector>

class BitcoinExchange : public std::vector<int> {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange&);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange&);
};
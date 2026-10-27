/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:32:15 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 00:36:52 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "Data.hpp"
#include "Serializer.hpp"

int main() {
	Data d1;
	Data d2(true);
	Data d3(false);

	uintptr_t ptrs[3] = {
		Serializer::serialize(&d1),
		Serializer::serialize(&d2),
		Serializer::serialize(&d3)
	};

	std::cout 
		<< *Serializer::deserialize(ptrs[0]) << "\n"
		<< *Serializer::deserialize(ptrs[1]) << "\n"
		<< *Serializer::deserialize(ptrs[2]) << "\n";

	return 0;
}
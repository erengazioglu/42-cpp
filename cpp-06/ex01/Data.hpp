/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:42:47 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/22 13:16:35 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include "Common.hpp"

class Data {
	public:
		Data();
		Data(const Data&);
		Data(const bool alternative);
		~Data();
		Data& operator=(const Data&);
	private:
		std::string _sdata;
		int			_intdata;
};

#endif
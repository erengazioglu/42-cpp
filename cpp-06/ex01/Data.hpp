/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:42:47 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 00:10:21 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include "Common.hpp"

class Data {
	public:
		Data();
		Data(const Data&);
		Data(const bool alt);
		~Data();
		Data& operator=(const Data&);
	private:
		std::string _sdata;
		int			_intdata;
};

#endif
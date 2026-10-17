/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Common.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:52:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/17 17:18:59 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON
# define COMMON

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

enum Type { INVALID, INT, CHAR, FLOAT, DOUBLE, SPECIAL_FLOAT, SPECIAL_DOUBLE };

# include <string>
# include <iostream>
# include <cctype>
# include <iomanip>
# include <cstdlib>

#endif
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/30 23:18:52 by egaziogl          #+#    #+#              #
#    Updated: 2026/09/03 15:28:42 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= frag
SRC		= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
DEP		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re
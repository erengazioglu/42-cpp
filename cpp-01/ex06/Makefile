# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/17 18:58:05 by egaziogl          #+#    #+#              #
#    Updated: 2026/08/21 09:51:48 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= harl_filter
SRC		= \
	main.cpp \
	Harl.cpp
DEP	= \
	Harl.hpp

all: $(NAME)

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

tests:
	@echo "No tests to run."
clean:
	@echo "Nothing to clean."
fclean:
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re tests
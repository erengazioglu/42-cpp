# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 00:55:13 by egaziogl          #+#    #+#              #
#    Updated: 2026/10/30 00:55:23 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= iter
SRC		= \
	main.cpp
DEP		= \
	iter.hpp

all: $(NAME)

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/16 01:50:18 by egaziogl          #+#    #+#              #
#    Updated: 2026/08/17 19:49:15 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= sedpp
SRC		= \
	main.cpp
DEP	= \
	sedpp.hpp
RMFILES = 1 2 3 4 5 6 7 8

all: $(NAME) tests

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

tests:
	@echo --- Creating files...
	@echo "hello" > test1.txt
	@echo "hello world" > text2.txt
	@echo "hello world" > test3.txt
	@echo "hello world" > test4.txt
	@echo "" > test5.txt
	@echo "" > test6.txt
	@touch test7.txt test8.txt
	@chmod a-rwx test8.txt
	@echo --- Testing...
	./$(NAME)
	./$(NAME) test1.txt
	./$(NAME) test1.txt hey
	./$(NAME) test0.txt
	./$(NAME) test1.txt hello hello
	./$(NAME) test1.txt hello hey
	./$(NAME) test2.txt hello hey
	./$(NAME) test3.txt "" hey
	./$(NAME) test4.txt hola hey

clean:
	rm -f test*.txt test*.replace
fclean: clean
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re tests
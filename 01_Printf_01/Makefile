# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrony <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 10:52:14 by mrony             #+#    #+#              #
#    Updated: 2022/12/06 18:30:51 by mrony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_format.c \
		c_format.c \
		s_format.c \
		di_format.c

CC = clang

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

INC = libft.h

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

norme:
	norminette

git: norme
	git add .
	git commit -m "push"
	git push

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	make clean
	make all

test: $(NAME)
	$(CC) $(CFLAGS) -g main.c -L . -lftprintf -L ./libft/ -lft

.PHONY: all clean fclean re

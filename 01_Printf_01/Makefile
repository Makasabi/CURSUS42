# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrony <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 10:52:14 by mrony             #+#    #+#              #
#    Updated: 2022/12/07 19:09:04 by mrony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_format.c \
		ft_utils.c \
		c_format.c \
		s_format.c \
		di_format.c \
		u_format.c \
		mod_format.c \
		x_format.c \
		X_format.c \
		ft_utoa.c \
		p_format.c

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

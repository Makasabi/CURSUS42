# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrony <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 16:30:49 by mrony             #+#    #+#              #
#    Updated: 2022/12/05 16:39:14 by mrony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_conversion.c \
		ft_data.c \
		ft_format.c \
		ft_printf_utils \
		ft_putnbr_base_count.c \
		ft_putnbr_count.c \
		ft_putunsigned_count.c

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
	$(CC) $(CFLAGS) main.c -L ./libft -lft

.PHONY: all clean fclean re

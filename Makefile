# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrony <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 11:30:05 by mrony             #+#    #+#              #
#    Updated: 2022/11/18 17:41:11 by mrony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

CC = clang

CFLAGS = -Werror -Wextra -Wall

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

INC = libft.h

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) ./a.out libft.h.gch

re: clean all

test: $(NAME)
	$(CC) $(CFLAGS)  main.c -L . -lft

.PHONY:	all clean fclean re


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:51:44 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 17:36:56 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int i = 0;
	int j = 10;
	int d = 4;
	char c = 'c';
	unsigned int u = -2147483648;
	unsigned int v = -789464;
	char *str = "Hello world";

	ft_printf("ft_printf\n");
	i += ft_printf("This is a char: %c\n", c);
	i += ft_printf("This is a string: %s. This is 42.\n", str);
	i += ft_printf("This is a an int: %i and also this: %d\n", j, d);
	i += ft_printf("This is an unsigned int : %u\n", u);
	i += ft_printf("This is an unsigned int : %u\n", v);
	i += ft_printf("This is a modulo: %%\n");
	i += ft_printf("this is -789464 in lowercase hexadecimal: %x\n", v);
	i += ft_printf("this is -789464 in uppercase hexadecimal: %X\n", v);
	i += ft_printf("This is a pointer address : %p\n %d\n %c\n %s\n", &j, j, c, str);
	ft_printf("length printed: %i\n", i);

	
	i = 0;
	printf("\nprintf\n");
	i += printf("This is a char: %c\n", c);
	i += printf("This is a string: %s. This is 42.\n", str);
	i += printf("This is a an int: %i and also this: %d\n", j, d);
	i += printf("This is an unsigned int : %u\n", u);
	i += printf("This is an unsigned int : %u\n", v);
	i += printf("This is a modulo: %%\n");
	i += printf("this is -789464 in lowercase hexadecimal: %x\n", v);
	i += printf("this is -789464 in uppercase hexadecimal: %X\n", v);
	i += printf("This is a pointer address : %p\n %d\n %c\n %s\n", &j, j, c, str);
	printf("length printed: %i\n", i);
	return 0;
}

// 64 test: $(NAME)
//	$(CC) $(CFLAGS) -g main.c -L . -lftprintf -L ./libft/ -lft

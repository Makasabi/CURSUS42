/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:41:19 by mrony             #+#    #+#             */
/*   Updated: 2022/11/30 16:49:44 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putchar_count(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_conversion(char c, void *args)
{
	//%c
	if (c == 'c')
		// imprimer le caractere c a l'ecran & retourner le nombre de caracteres imprimes (1)
		return(ft_putchar_count(va_arg(args, int)));
	//%s
	//%p
	//%d
	//%i
	//%u
	//%x
	//%X
	//%%
}

int	ft_printf(const char *str, ...)
{
	int		len_printed;
	int		i;
	va_list	args;

	len_printed = 0;
	i = 0;
	va_start(args, str); //on accede a la liste des arguments.

	// Si on trouve un "%" --> chercher si ce qu'il y a ensuite est un charactere valide - (ft_is_charset ?); 
	// incrementer la len que printf retourne d'autant de char que la variable convertie.
	// sinon, incrementer de 1 a chaque "impression" de charactere
	while (str[i])
	{
		if (str[i] == '%')
		{	
			lenprinted += ft_conversion(str[i + 1], args);
			i+2;
		}
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (len_printed);
}

int	main(void)
{
	ft_printf("this is a char: %c\n", 'c');
}

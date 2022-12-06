/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:39:33 by mrony             #+#    #+#             */
/*   Updated: 2022/12/05 16:40:19 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	int	i = 0;
//	int d = -47483648;
//	int u = -954;
//	char *s = "hello world";
	char c = 'c';
//	void *ptr = NULL;

	i += ft_printf("This is a char : \t\t\t%c\n", c);
//	i += ft_printf("This is a string: \t\t\t%s\n", s);
//	i += ft_printf("This is an int: \t\t\t%d\n", d);
//	i += ft_printf("This is a signed decimal integer: \t%i\n", d);
//	i += ft_printf("This is an unsigned decimal integer: \t%u\n", u);
	ft_printf("len printed :\t\t\t\t%d\n\n", i);

	i = 0;
	i += printf("This is a char : \t\t\t%c\n", c);
//	i += printf("This is a string: \t\t\t%s\n", s);
//	i += printf("This is an int: \t\t\t%d\n", d);
//	i += printf("This is a signed decimal integer: \t%i\n", d);
//	i += printf("This is an unsigned decimal integer: \t%u\n", u);
	printf("len printed :\t\t\t\t%d\n", i);
	
}

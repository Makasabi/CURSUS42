/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:51:44 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 17:26:56 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main()
{
	int i = 0;
	char c = 'c';
	char *str = "Hello world";

	ft_printf("ft_printf\n");
	i += ft_printf("This is a char: %c\n %a", c);
//	i += ft_printf("This is a string: %s\n", str);
//	ft_printf("lenght printed: %d\n", i);

	i = 0;
	printf("printf\n");
	i = printf("This is a char: %@\n");
	i = printf("This is a string: %s\n", str);
//	printf("lenght printed: %d\n", i);
	return 0;
}

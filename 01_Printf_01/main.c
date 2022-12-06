/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:51:44 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 20:01:00 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main()
{
	int i = 0;
	char c = 'c';
	char *str = "Hello world";

	ft_printf("ft_printf\n");
	i += ft_printf("This is a char: %c %a\n", c);
	printf("%d\n", i);
	i += ft_printf("This is a string: %s. This is 42.\n", str);
	printf("%d\n", i);
	ft_printf("length printed: %i\n", i);
	printf("%d\n", i);

//	i = 0;
//	printf("printf\n");
//	i = printf("This is a char: %c \n", c);
//	i = printf("This is a string: %s\n", str);
//	printf("length printed: %d\n", i);
	return 0;
}

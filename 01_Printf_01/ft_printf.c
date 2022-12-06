/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:50:24 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 17:26:11 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *toprint, ...)
{
	int	i;
	int	res;
	va_list	args;
	i = 0;
	res = 0;
	va_start(args, toprint);
	while (toprint[i])
	{
		if (toprint[i] != '%')
		{
			write(1, &toprint[i], 1);
			i++;
			res++;
		}
		if (toprint[i] == '%')
		{
			if (ft_format(args, toprint[i + 1]) == 0)
				i++;
			else
			{
				res += ft_format(args, toprint[i + 1]);
				i += 2;
			}
		}
	}
	va_end(args);
	return (res);
}

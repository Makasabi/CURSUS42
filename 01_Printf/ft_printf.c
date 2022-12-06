/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:26:55 by mrony             #+#    #+#             */
/*   Updated: 2022/12/05 18:26:32 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len_printed;
	va_list	args;
	t_data data;
	
	ft_data_init(&data);
	i = 0;
	len_printed = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			len_printed++;
			i++;
		}
		if (str[i] == '%')
		{
			i++;
			len_printed += ft_conversion(args, str[i], &data);
			i++;
		}
	}
	va_end(args);
//	free(&data);
	return (len_printed);
}
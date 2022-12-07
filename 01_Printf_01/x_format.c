/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:26:43 by mrony             #+#    #+#             */
/*   Updated: 2022/12/07 18:26:51 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int x_format(int i, arg_list *data, va_list args)
{
	(void)i;
	(void)args;
	char *base = "0123456789abcdef";
	int	res;

	res = 0;
	data->ui = va_arg(args, unsigned int);
	ft_putnbr_hexa(data->ui, base, &res);
	return (res);
}

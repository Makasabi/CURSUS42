/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   X_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:27:28 by mrony             #+#    #+#             */
/*   Updated: 2022/12/07 18:27:40 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int X_format(int i, arg_list *data, va_list args)
{
	(void)i;
	(void)args;
	char *base = "0123456789ABCDEF";
	int	res;

	res = 0;
	data->ui = va_arg(args, unsigned int);
	ft_putnbr_hexa(data->ui, base, &res);
	return (res);
}

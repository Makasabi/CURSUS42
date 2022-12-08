/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:52:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 12:42:12 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	di_format(int i, t_data *data, va_list args)
{
	char	*str;
	int		res;

	(void)i;
	data->i = va_arg(args, int);
	str = ft_itoa(data->i);
	if (!str)
		return (0);
	res = ft_putstr_count(str);
	free(str);
	return (res);
}

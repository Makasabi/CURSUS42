/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:39:40 by mrony             #+#    #+#             */
/*   Updated: 2022/12/07 18:15:27 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int u_format(int i, arg_list *data, va_list args)
{
	char *str;
	int	res;
	(void)i;

	data->ui = (va_arg(args, int));
	str = ft_utoa(data->ui);
	if (!str)
		return(0);
	res = ft_putstr_count(str);
	free(str);
	return (res);
}

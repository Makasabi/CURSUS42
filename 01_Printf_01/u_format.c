/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:39:40 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 11:33:44 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	u_format(int i, t_data *data, va_list args)
{
	char	*str;
	int		res;

	(void)i;
	data->ui = (va_arg(args, int));
	str = ft_utoa(data->ui);
	if (!str)
		return (0);
	res = ft_putstr_count(str);
	free(str);
	return (res);
}

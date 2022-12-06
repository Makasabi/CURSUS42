/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:44 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 20:01:02 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void ft_data_init(arg_list *data)
{
	data->i = 0;
	data->ui = 0;
	data->c = '0';
	data->str = "";
	data->ptr = &data->i;
}

static fp	ft_idformat(int i, arg_list *data, va_list args)
{
	(void)data;
	(void)args;
	fp	*fp_tab;

	fp_tab = (fp[128]){
		(void *)0,
	['c'] = c_format, 
	['s'] = s_format,
//	['p'] = p_format,
	['d'] = di_format,
	['i'] = di_format,
//	['u'] = u_format,
//	['x'] = x_format,
//	['X'] = X_format,
//	['%'] = %_format,
	};
	return (fp_tab[i]);
}

int	ft_format(va_list args, char c)
{
	fp	format;
	arg_list data;
	ft_data_init(&data);

	format = ft_idformat(c, &data, args);
	if (format == NULL)
		return (0);
	return (format(c, &data, args));
}

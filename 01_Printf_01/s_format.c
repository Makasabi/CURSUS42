/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:59:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 16:44:49 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	s_format(int i, arg_list *data, va_list args)
{
	(void)i;
	int index;
	
	index = 0;
	data->str = ft_strdup(va_arg(args, char*));
	if (!(data->str))
		return (0);
	while (data->str[index])
	{
		write(1, &data->str[index], 1);
		index++;
	}
	free(data->str);
	return (index);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:59:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 18:51:30 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	s_format(int i, arg_list *data, va_list args)
{
	(void)i;
	int j;
	char c;
	
	j = 0;
	data->str = ft_strdup(va_arg(args, char*));
	if (!(data->str))
		return (0);
	while (data->str[j])
	{
		c = data->str[j];
		write(1, &c, 1);
		j++;
	}
	free(data->str);
	return (j);
}

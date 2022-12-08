/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:59:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 11:17:15 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	s_format(int i, t_data *data, va_list args)
{
	int		j;
	char	c;

	(void)i;
	j = 0;
	data->str = ft_strdup(va_arg(args, char *));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:51:23 by mrony             #+#    #+#             */
/*   Updated: 2022/12/05 16:52:34 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_count(t_data data)
{
	write(1, &data->_char, 1);
	return (1);
}

int	ft_putstr_count(t_data data)
{
	int	i;

	i = 0;
	while (data->_str[i])
	{
		write(1, &data->_str[i], 1);
		i++;
	}
	return (i);
}
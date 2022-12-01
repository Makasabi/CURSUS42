/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:51:23 by mrony             #+#    #+#             */
/*   Updated: 2022/12/01 17:36:58 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_count(char c, int *ptr_len)
{
	write(1, &c, 1);
	*ptr_len++;
}

void	ft_putstr_count(char *s, int *ptr_len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	*ptr_len += i;
}

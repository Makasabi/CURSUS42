/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:05:52 by mrony             #+#    #+#             */
/*   Updated: 2022/12/07 18:26:13 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

void ft_putchar_count(char c, int *i)
{
	write(1, &c, 1);
	*i += 1;
}

void ft_putnbr_hexa(unsigned int nbr, char *base, int *count)
{
	if(nbr/ 16)
		ft_putnbr_hexa(nbr / 16, base, count);
	ft_putchar_count(base[nbr % 16], count);
}

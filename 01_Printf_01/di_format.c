/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:52:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 19:56:25 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putchar_count(char c, int *res)
{
	write(1, &c, 1);
	*res = *res + 1;
}

static void	ft_putnbr_count(int n, int *res)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_count('-', res);
		nb = -nb;
		ft_putnbr_count(nb, res);
	}
	else if (nb > 9)
	{
		ft_putnbr_count(nb / 10, res);
		ft_putnbr_count(nb % 10, res);
	}
	else if (nb <= 9)
		ft_putchar_count(nb + 48, res);
}

int di_format(int i, arg_list *data, va_list args)
{
	int	res;
	(void)i;

	res = 0;
	data->i = va_arg(args, int);
	printf("di_format data->i: %d\n", data->i);
	ft_putnbr_count(data->i, &res);
	printf("di_format res: %d\n", res);
	return (res);
}

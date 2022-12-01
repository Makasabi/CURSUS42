/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:53:29 by mrony             #+#    #+#             */
/*   Updated: 2022/12/01 15:42:29 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_count(int n, int *ptr_len)
{
	long int	nb;

	(void)ptr_len;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_count('-', ptr_len);
		nb = -nb;
		ft_putnbr_count(nb, ptr_len);
	}
	else if (nb > 9)
	{
		ft_putnbr_count(nb / 10, ptr_len);
		ft_putnbr_count(nb % 10, ptr_len);
	}
	else if (nb <= 9)
		ft_putchar_count(nb + 48, ptr_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:30:36 by mrony             #+#    #+#             */
/*   Updated: 2022/12/01 15:12:16 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunsigned_count(unsigned int n, int *ptr_len)
{
	if (n > 9)
	{
		ft_putunsigned_count(n / 10, ptr_len);
		ft_putunsigned_count(n % 10, ptr_len);
	}
	else if (n <= 9)
		ft_putchar_count(n + 48, ptr_len);
}

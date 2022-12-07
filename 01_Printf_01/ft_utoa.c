/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:24:02 by mrony             #+#    #+#             */
/*   Updated: 2022/12/07 18:46:28 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_len(unsigned int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_utoa(unsigned int nb)
{
	char	*c;
	int		len;

	len = ft_len(nb);
	c = malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len--] = '\0';
	if (nb == 0)
	{
		c[0] = 48;
		return (c);
	}
	while (nb != 0)
	{
		c[len] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (c);
}

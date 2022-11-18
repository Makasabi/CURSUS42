/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:44:18 by mrony             #+#    #+#             */
/*   Updated: 2022/11/18 14:12:30 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*c;
	char	neg;
	size_t	len;
	long	nbr;

	len = 0;
	nbr = n;
	if (n < 0)
	{
		len = len + 1;
		neg = "-";
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;		
	}
	printf("len :%ld\n", len);
	c = malloc(sizeof(char)*(len +1));
	if (!c)
		return (NULL);
	while 
	return (c);
}

int	main(void)
{
	int	n = 124536789;
	char	*c;

	printf("\nft_atoi\n");
	printf("Int to convert in char: %d\n", n);
	c = ft_itoa(n);
	printf("Converted char: %s\n", c);
	free(c);
	return (0);
}

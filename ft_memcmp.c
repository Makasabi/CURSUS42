/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:26:46 by mrony             #+#    #+#             */
/*   Updated: 2022/11/17 16:48:59 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n)
		{
			str1++;
			str2++;
		}
	}
	return (0);	
}
/*
int	main(void)
{
	const char	s1[] = "abcdezgh";
	const char	s2[] = "abcdefgh";
	size_t n = 8;

	printf("The difference btween s1 and s2 in the first %ld bytes is : %d in ft_memcmp\n", n, ft_memcmp(s1, s2, n));
	printf("The difference btween s1 and s2 in the first %ld bytes is : %d in memcmp\n", n, memcmp(s1, s2, n));
	return (0);
}*/

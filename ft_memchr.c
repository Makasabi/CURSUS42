/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:34:51 by mrony             #+#    #+#             */
/*   Updated: 2022/11/21 16:00:36 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	if (c == 0 && n == 0)
		return (NULL);
	while (str[i] != (unsigned char)c && i < (n - 1))
		i++;
	if (str[i] == (unsigned char)c)
		return (str + i);
	return (NULL);
}

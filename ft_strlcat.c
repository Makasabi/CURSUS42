/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:41:57 by mrony             #+#    #+#             */
/*   Updated: 2022/11/26 19:08:10 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			dlen;
	size_t			slen;

	slen = ft_strlen(src);
	i = 0;
	if (!dst && !size)
		return (slen);
	dlen = ft_strlen(dst);
	if (size == 0 || size <= dlen)
		return (size + slen);
	while (src[i] && i < (size - dlen - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = src[slen];
	return (dlen + slen);
}

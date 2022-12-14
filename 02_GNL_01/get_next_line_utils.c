/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:20:08 by mrony             #+#    #+#             */
/*   Updated: 2022/12/14 18:05:03 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	size_t			ls1;
	size_t			ls2;
	char			*s3;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	s3 = malloc(ls1 + ls2 +1);
	if (!s3)
		return (NULL);
	i = -1;
	while (s1[++i])
		s3[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		s3[ls1] = s2[i];
		ls1++;
	}
	s3[ls1] = '\0';
	return (s3);
}

char	*ft_strdup(char *s, int j)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

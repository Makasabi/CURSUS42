/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:27:42 by mrony             #+#    #+#             */
/*   Updated: 2022/11/21 12:25:49 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	f(unsigned int n, char c)
{
	(void)n;
	
	return (c + 1);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	char (*plusn)(unsigned int, char) = &f;
	char	str[] = "This is a test";
	char	*str2;
	printf("\nft_strmapi\n");
	printf("str before: %s\n", str);
	str2 = ft_strmapi(str, plusn);
	printf("str after: %s\n", str2);
	free(str2);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:33:03 by mrony             #+#    #+#             */
/*   Updated: 2022/11/18 14:32:37 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	unsigned int	trigger;
	unsigned int	wordcount;
	
	wordcount = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			wordcount++;
			trigger = 1;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (wordcount);
}

static char	**ft_malloc_error(char **split)
{
	size_t	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

static char	**ft_wordsize(char const *s, char c, char **split)
{
	unsigned int	wordcount;
	size_t		wordlen;
	
	wordcount = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			wordlen = 0;
			while (*s != c && *s)
			{
				wordlen++;
				s++;
			}
			split[wordcount] = malloc(sizeof(char) * (wordlen + 1));
			if (!split[wordcount])
				return (ft_malloc_error(split));
			wordcount++;
		}
		else
			s++;
	}
	return (split);
}

static void	ft_wordcpy(char const *s, char c, char **split)
{
	unsigned int	wordcount;
	unsigned int	i;
	unsigned int	j;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i + j] != c)
		{
			while (s[i + j] != c && s[i + j])
			{
				split[wordcount][j] = s[i + j];
				j++;
			}
			split[wordcount][j] = '\0';
			wordcount++;
			i = i + j;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	wordcount;
	char		**split;

	wordcount = ft_wordcount(s, c);
	split = malloc(sizeof(char **) * (wordcount + 1));
	if (!split)
		return (NULL);
	split = ft_wordsize(s, c, split);
	if (!split)
		return (NULL);
	ft_wordcpy(s, c, split);
	split[wordcount] = NULL;
	return (split);
}

/*
int	main(int ac, char **av)
{
	char		**str;
	int		wordcount;
	int		i;

	i = 0;
	if (ac != 3)
	{
		printf("Wrong argument count - please try again.\n");
		return (0);
	}
	printf("\nft_split\n");
	printf("orignal string: %s\n", av[1]);
	printf("Delimiter character : '%c'\n", av[2][0]);
	wordcount = ft_wordcount(av[1], av[2][0]);
	printf("Wordcount: %d\n", wordcount);
	str = ft_split(av[1], av[2][0]);
	while (i <= wordcount)
	{
		printf("Tab[%d]: '%s'\n", i, str[i]);
		i++;
	}
	i = 0;
	while (i <= wordcount)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}*/

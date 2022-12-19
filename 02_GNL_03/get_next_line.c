/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:44:07 by mrony             #+#    #+#             */
/*   Updated: 2022/12/20 00:32:28 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_copy(char *dump, int fd)
{
	char	*buff;
	int		read_fd;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	read_fd = 1;
	while (ft_strchr(dump, '\n') == 0 && read_fd != 0)
	{
		read_fd = read(fd, buff, BUFFER_SIZE);
		if (read_fd <= 0)
		{
			free(buff);
			return (dump);
		}
		buff[read_fd] = '\0';
		dump = ft_strjoin(dump, buff);
		if (!dump)
			return (NULL);
	}
	free(buff);
	return (dump);
}

char	*dump_to_line(char *dump)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dump[i] && dump[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	while (dump[j] && dump[j] != '\n')
	{
		line[j] = dump[j];
		j++;
	}
	if (dump[j] == '\n')
	{
		line[j] = dump [j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*dump_clean(char *dump)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	while (dump[i] && dump[i] != '\n')
		i++;
	size = ft_strlen(dump);
	ft_memmove(dump, dump + i + 1, size - i);
	if (dump[0] == '\0' || (dump[i] == '\0' && i < ft_strlen(dump)))
	{
		free(dump);
		return (NULL);
	}
	if (i == size)
	{
		free(dump);
		return (NULL);
	}
	dump[size] = '\0';
	return (dump);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*dump;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	dump = read_and_copy(dump, fd);
	if (!dump)
		return (free(dump), NULL);
	line = dump_to_line(dump);
	dump = dump_clean(dump);
	return (line);
}

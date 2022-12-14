/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:50:46 by mrony             #+#    #+#             */
/*   Updated: 2022/12/14 18:59:37 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*new_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i] != '\n')
			i++;
	line = ft_strdup(str, i + 1);
	return (line);
}

char	*rest_of_str(char *str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (str[i] != '\n')
		i++;
	tmp = ft_strdup((str + i + 1), (ft_strlen(str) - i));
	free(str);
	return (tmp);
}

int	check_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*buff_to_str(char *buff, char *str)
{
	char	*result;

	if (!str)
		result = ft_strdup(buff, BUFFER_SIZE);
	else
		result = ft_strjoin(str, buff);
	free(str);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char 		*buff;
	int			read_fd;
	char		*line_read;

	read_fd = 1;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	while (read_fd > 0)
	{
		if (!str || check_nl(str) == 0)
		{
			buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
			if (!buff)
				return(NULL);
			read_fd = read(fd, buff, BUFFER_SIZE);
			if (read_fd <= 0)
				return (NULL);
			buff[BUFFER_SIZE] = '\0';
			str = buff_to_str(buff, str);
			free(buff);
		}
		if (check_nl(str) == 1 || (check_nl(str) == 0 && read_fd < BUFFER_SIZE))
		{
			line_read = new_line(str);
			str = rest_of_str(str);
			read_fd = 0;
		}
	}
	return (line_read);
}

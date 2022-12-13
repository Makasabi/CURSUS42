/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:50:46 by mrony             #+#    #+#             */
/*   Updated: 2022/12/13 18:14:57 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*new_line(char **str)
{
	unsigned int	i;
	char			*tmp;
	char			*line;

	i = 0;
	while (str[i])
	{
		if (*str[i] == '\n')
		{
			line = ft_strdup(*str, i + 1);
			tmp = ft_str((*str + i + 1), (ft_strlen(*str) - i + 1));
			*str = tmp;
			break;
		}
		i++;
	}
	return (line);
} 

char	*get_next_line(int fd)
{
	static char	*str;
	char 		buff[BUFFER_SIZE +1];
	int			read_fd;
	char 		*line_read;

	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	if ((read_fd = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[BUFFER_SIZE] = '\0';
		if (!str)
			str = ft_strdup(buff, BUFFER_SIZE + 1);
		else
			str = ft_strjoin(str, buff);
		if (!str)
			return (NULL);
	}
	line_read = new_line(&str);	

	return (line_read);
	
	//4// Si oui, copier le contenu du debut du buffer jusqu'a la fin de la ligne dans une ligne a renvoyer au main.
	//4 bis// Si non, je relance la lecture et j'ajoute la nouvelle portion a la suite du buffer temporaire.
	//5// le buffer doit garder ce qu'il n'a pas envoye' dans l nouvelle ligne.

}

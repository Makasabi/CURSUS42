/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:43:47 by mrony             #+#    #+#             */
/*   Updated: 2022/12/13 14:49:00 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *check_new_line(t_gnl_list *chain)
{
	char *new_line;
	static int i;

	while (chain->str)
	{
		if (chain->str[i] == '/')
			if(chain->str[i + 1] == 'n')
			{
				new_line = ft_strdup(chain->str, i + 1);
				new_line[i + 2] = '\0';
				return (new_line);
			}
		i++;
	}
	return ;
} 

char	*get_next_line(int fd)
{
	char		*dump;
	int			read_fd;
	t_gnl_list 	*chain;
	char		*line;

	read_fd = 0;
	dump = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!dump)
		return (NULL);
	read_fd = read(fd, dump, BUFFER_SIZE);
	dump[read_fd] = '\0';
	chain = ft_lstnew(dump);
	chain = ft_lstadd_back(**chain, 
	printf("%s\n", chain->str);
	
	return (dump);

}

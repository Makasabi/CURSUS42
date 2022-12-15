/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:11:20 by mrony             #+#    #+#             */
/*   Updated: 2022/12/15 18:12:27 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}

int	check_nl(t_list *read_buffs)
{
	int	i;

	i = 0;
	while (read_buffs)
	{
		while (read_buffs->content[i])
		{
			if (read_buffs->content[i] == '\n')
				return (1);
			i++;
		}
		i = 0;
		read_buffs = read_buffs->next;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE + 1];
	int		fd_read;
	static t_list	*read_buffs;
	t_list	*new_buff;

	if (fd <= 0 || BUFFER_SIZE == 0)
		return (NULL);
	while (fd_read > 0)
	{
		fd_read = read(fd, buff, BUFFER_SIZE);
		new_buff = ft_lstnew(buff);
		ft_lstadd_back(&read_buffs, new_buff);
		print_list(read_buffs);
		if (check_nl(read_buffs) == 0)
			continue;
	}
	return(read_buffs->content);
}

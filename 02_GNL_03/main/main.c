/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:20:25 by mrony             #+#    #+#             */
/*   Updated: 2022/12/19 19:17:12 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main(int ac, char **av)
{
	int	fd;
	char *line;

	(void)ac;
	fd = 0;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		printf("error opening file\n");
	while (fd >= 0)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("Main: %s", line);
		free(line);
	}
	return (1);
}

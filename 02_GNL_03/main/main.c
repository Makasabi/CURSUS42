/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:20:25 by mrony             #+#    #+#             */
/*   Updated: 2022/12/20 00:12:52 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main(int ac, char **av)
{
	int	fd1;
	int fd2;
	int fd3;
	char *line;

	(void)ac;
	fd1 = 0;
	fd2 = 0;
	fd3 = 0;
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		printf("fd1 error opening file\n");
	fd2 = open(av[2], O_RDONLY);
	if (fd2 == -1)
		printf("fd2 error opening file\n");
	fd3 = open(av[3], O_RDONLY);
	if (fd3 == -1)
		printf("fd3 error opening file\n");
	while (fd1 >= 0 && fd2 >= 0 && fd3 >= 0)
	{
		line = get_next_line(fd1);
		if (line == NULL)
			break;
		printf("Main: %s", line);
		free(line);
		line = get_next_line(fd2);
		if (line == NULL)
			break;
		printf("Main: %s", line);
		free(line);
		line = get_next_line(fd3);
		if (line == NULL)
			break;
		printf("Main: %s", line);
		free(line);
	}
	return (1);
}

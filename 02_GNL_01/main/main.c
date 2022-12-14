/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:51:27 by mrony             #+#    #+#             */
/*   Updated: 2022/12/14 18:27:09 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main()
{
	int fd;
	char *line;

	fd = 0;
	fd = open("Lorem_Ipsum.txt", O_RDONLY);
	if (fd == -1)
		printf("error opening file\n");
	while (fd >= 0)
	{
		line = get_next_line(fd);
		if(line == NULL)
			break;
		printf("%s", line);
		free(line);
	}
	return (0);
}

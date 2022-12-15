/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:19:46 by mrony             #+#    #+#             */
/*   Updated: 2022/12/15 14:27:20 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main()
{
	int fd;
	char *line;

	fd = 0;
	fd = open("Lorem_ipsum", O_RDONLY);
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

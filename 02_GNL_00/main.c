/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:43:57 by mrony             #+#    #+#             */
/*   Updated: 2022/12/13 12:48:31 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main()
{
	int 	fd;
	char	*line;

	fd = open("Lorem_Ipsum.txt", O_RDONLY);
	if (fd == -1)
		printf("error opening file\n");
//	while (1)
//	{
		line = get_next_line(fd);
//		if (line == NULL)
//			break;
//		printf("%s\n", line);
		free(line);
//	}
	return (1);
}

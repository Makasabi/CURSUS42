/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:31:49 by mrony             #+#    #+#             */
/*   Updated: 2022/12/09 15:37:17 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE

# define GET_NEXT_LINE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE

# define BUFFER_SIZE 42

#endif

typedef struct s_gnl_list
{
	char				*str;
	struct	s_gnl_list	*next;
}						t_gnl_list;

char	*get_next_line(int fd);

#endif

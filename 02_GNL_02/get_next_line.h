/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:11:58 by mrony             #+#    #+#             */
/*   Updated: 2022/12/15 18:12:32 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// LIBRARIES //

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

// LINKED LIST //

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

// MAIN FUNCTION // 

char	*get_next_line(int fd);

// UTILS //

t_list	*ft_lstnew(char *content);
void    ft_lstadd_back(t_list **lst, t_list *new);
t_list  *ft_lstlast(t_list *lst);



#endif

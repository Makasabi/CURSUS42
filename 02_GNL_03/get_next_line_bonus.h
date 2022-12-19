/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:06:51 by mrony             #+#    #+#             */
/*   Updated: 2022/12/19 23:57:09 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

unsigned int	ft_strlen(char *str);
char			*get_next_line(int fd);
char			*ft_strchr(const char *s, int c);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strjoin(char *s1, char *s2);

#endif

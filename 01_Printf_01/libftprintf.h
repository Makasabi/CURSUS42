/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:44:54 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 17:08:11 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct ft_printf_arg_list{
	int	i;
	unsigned int ui;
	char c;
	char *str ;
	void *ptr;
}		arg_list;

typedef int (*fp)(int, arg_list *data, va_list args);

int ft_printf(const char *, ...);
int ft_check(const char *str, int i);
int ft_format(va_list args, char c);

int c_format(int i, arg_list *data, va_list args);
int s_format(int i, arg_list *data, va_list args);



#endif

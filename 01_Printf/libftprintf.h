/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:34:34 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 12:53:45 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


typedef struct s_data{
	int			_int;
	unsigned int _uns_int;
	char		_char;
	char		*_str;
	void		*_ptr;
}	t_data;

typedef int(*fp)(int, t_data *);

int ft_printf(const char *, ...);
int	ft_putchar_count(int, t_data *);
int	ft_putstr_count(int, t_data *);
int	ft_putnbr_count(int, t_data *);
int	ft_putunsigned_count(int, t_data *);
void	ft_data_init(t_data *);
int ft_conversion(va_list, char, t_data *);
fp  ft_tab(int c, t_data *data);

#endif

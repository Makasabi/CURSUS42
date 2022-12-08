/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:44:54 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 11:21:11 by mrony            ###   ########.fr       */
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

// DATA STRUCTURE //
typedef struct ft_printf_arg_list{
	int				i;
	unsigned int	ui;
	char			c;
	char			*str ;
	void			*ptr;
}					t_data;

// FUNCTION POINTER //
typedef int	(*t_fp)(int, t_data *data, va_list args);

// MAIN FUNCTIONS //
int		ft_printf(const char *toprint, ...);
int		ft_format(va_list args, char c);

// UTILS //
int		ft_putstr_count(char *str);
void	ft_putchar_count(char c, int *i);
void	ft_putnbr_hexa(unsigned int nbr, char *base, int *count);
char	*ft_utoa(unsigned int n);

// CONVERSION FUNCTIONS//
int		c_format(int i, t_data *data, va_list args);
int		s_format(int i, t_data *data, va_list args);
int		di_format(int i, t_data *data, va_list args);
int		u_format(int i, t_data *data, va_list args);
int		mod_format(int i, t_data *data, va_list args);
int		x_format(int i, t_data *data, va_list args);
int		xx_format(int i, t_data *data, va_list args);
int		p_format(int i, t_data *data, va_list args);

#endif

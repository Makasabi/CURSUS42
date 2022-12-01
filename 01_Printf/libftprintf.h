/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:34:34 by mrony             #+#    #+#             */
/*   Updated: 2022/12/01 17:51:39 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef int(*fp)();


int ft_printf(const char *, ...);
void	ft_putchar_count(char, int*);
void	ft_putstr_count(char *, int*);
void	ft_putnbr_count(int, int*);
void	ft_putunsigned_count(unsigned int, int*);



#endif

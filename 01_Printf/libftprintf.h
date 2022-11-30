/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:34:34 by mrony             #+#    #+#             */
/*   Updated: 2022/11/30 16:47:13 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
#include <unistd.h>

int ft_printf(const char *, ...);

#endif

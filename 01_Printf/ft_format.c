/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:57:22 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 12:55:11 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

fp	ft_tab(int c, t_data *data)
{
	(void)data;
	fp	*format_tab;

	format_tab = (fp[128]){
		(void *)0,
	['c'] = ft_putchar_count,
	['s'] = ft_putstr_count,
	['d'] = ft_putnbr_count,
//	['u'] = ,
//	['i'] = ,
//	['p'] = ,
//	['x'] = ,
//	['X'] = ,
//	['%'] = ,
	};
	return (format_tab[c]);
}

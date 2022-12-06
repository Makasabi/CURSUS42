/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:57:42 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 17:58:38 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	c_format(int i, arg_list *data, va_list args)
{
	(void)i;
	data->c = va_arg(args, int);
	
	write(1, &data->c, 1);
	return (1);
}

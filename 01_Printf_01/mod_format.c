/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:01:28 by mrony             #+#    #+#             */
/*   Updated: 2022/12/08 11:14:38 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	mod_format(int i, t_data *data, va_list args)
{
	(void)i;
	(void)args;
	(void)data;
	write(1, "%", 1);
	return (1);
}

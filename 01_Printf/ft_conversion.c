/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:08:04 by mrony             #+#    #+#             */
/*   Updated: 2022/12/05 18:47:07 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"



int	ft_conversion(va_list args, char c, t_data *data)
{
	int	i;
	fp	print;

	i= 0;
	ft_data(c, data, args);
	print = ft_tab(c, data);
	return(print(i, data));
}

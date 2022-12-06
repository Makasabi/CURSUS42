/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:07:23 by mrony             #+#    #+#             */
/*   Updated: 2022/12/06 12:39:13 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "test.h"

void ft_data_init(arg_list *data)
{
	data->i = 0;
	data->ui = 0;
	data->c = '0';
	data->str = "";
	data->ptr = &data->i;
	
}

int	main()
{
	va_list	args;
	arg_list	data_ptr;
	ft_data_init(&data_ptr);

	printf("%c\n", data_ptr.c);
}

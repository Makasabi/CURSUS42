/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:41:19 by mrony             #+#    #+#             */
/*   Updated: 2022/12/01 17:51:43 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_conversion(char c, va_list args, int *ptr_len)
{
	if (c == 'c')
		ft_putchar_count(va_arg(args, int), ptr_len);
	if (c == '%')
		ft_putchar_count('%', ptr_len);
	if (c == 's')
		ft_putstr_count(va_arg(args, char *), ptr_len);
	if (c == 'd' || c == 'i')
		ft_putnbr_count(va_arg(args, int), ptr_len);
	if (c == 'u')
		ft_putunsigned_count(va_arg(args, unsigned int), ptr_len);
	if (c == 'p')
		ft_putnbr_base_count(va_arg(args, void *), ptr_len);
	
	//%x
	//%X
	
}

fp	function_select(int c);
{
	fp	*f_table;

	f_table = fp[128]{
		(void *)0,
		['c'] = ft_putchar_count(char)
}

int	ft_printf(const char *str, ...)
{
	int		len_printed;
	int		i;
	va_list	args;

	len_printed = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			ft_conversion(str[i + 1], args, &len_printed);
			i += 2;
		}
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			len_printed++;
			i++;
		}
	}
	va_end(args);
	return (len_printed);
}

int	main(void)
{
	int	i = 0;
	int d = -47483648;
	int u = -954;
	char *s = "hello world";
	char c = 'c';
	void *ptr = NULL;

	i += ft_printf("This is a char : \t\t\t%c\n", c);
	i += ft_printf("This is a string: \t\t\t%s\n", s);
	i += ft_printf("This is an int: \t\t\t%d\n", d);
	i += ft_printf("This is a signed decimal integer: \t%i\n", d);
	i += ft_printf("This is an unsigned decimal integer: \t%u\n", u);
	ft_printf("len printed :\t\t\t\t%d\n\n", i);

	i = 0;
	i += printf("This is a char : \t\t\t%c\n", c);
	i += printf("This is a string: \t\t\t%s\n", s);
	i += printf("This is an int: \t\t\t%d\n", d);
	i += printf("This is a signed decimal integer: \t%i\n", d);
	i += printf("This is an unsigned decimal integer: \t%u\n", u);
	printf("len printed :\t\t\t\t%d\n", i);
	
}

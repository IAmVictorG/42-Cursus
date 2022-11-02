/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:09:00 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/01 21:33:18 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	formats(const char format, va_list args)
{
	if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 'd')
		ft_putnbr(va_arg(args, int));
	else if (format == 'x')
		ft_putchar(format);
	else
		ft_putchar(format);
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			formats(*(++s), args);
		else
			ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (0);
}

int	main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	printf("Me : \n");
	ft_printf("%sZZZZ%dEND\n", "12345", 76);
	printf("\nExpected : \n");
	printf("%sZZZZ%dEND\n", "12345", 76);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:09:00 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/08 18:12:33 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'x')
		len += ft_print_hexa(va_arg(args, unsigned int), BASEHEXAMIN);
	else if (format == 'X')
		len += ft_print_hexa(va_arg(args, unsigned int), BASEHEXAMAJ);
	else if (format == 'u')
		len += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_print_pointer(va_arg(args, unsigned long long));
	else if (format == '%')
		len += ft_printchar('%');
	else
		len += ft_printchar(format);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;

	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
			len += formats(*(++s), args);
		else
			len += ft_printchar(*s);
		s++;
	}
	va_end(args);
	return (len);
}

/*int	main(int argc, char const *argv[])
{
	char	*c;

	(void) argc;
	(void) argv;
	c = "ATAT";
	printf("Me : \n");
	printf("	%d\n", ft_printf("%p", c));
	printf("\nExpected : \n");
	printf("	%d\n", printf("%p", c));
	return (0);
}
*/
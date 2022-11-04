/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:09:00 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/04 14:15:55 by vgiordan         ###   ########.fr       */
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
		len += ft_print_hexa(va_arg(args, size_t), BASEHEXAMIN);
	else if (format == 'X')
		len += ft_print_hexa(va_arg(args, size_t), "0123456789ABCDEF");
	else if (format == 'u')
		len += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_print_pointer(va_arg(args, size_t));
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
	(void) argc;
	(void) argv;
	printf("Me : \n");
	ft_printf("%s%x%s%%%i %d\n", "Victor", 2000, "Giordani", 075, 3000);
	printf("Expected : \n");
	printf("%s%x%s%%%i %d\n", "Victor", 2000, "Giordani", 075, 3000);
	return (0);
}
*/
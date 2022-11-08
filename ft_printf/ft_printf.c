/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:09:00 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/08 15:08:47 by vgiordan         ###   ########.fr       */
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
		len += ft_print_hexa(va_arg(args, size_t), BASEHEXAMAJ);
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
	ft_printf("x\vyc:_%Xogx9.%d,2\rG\ns%p%x_~Ab%uvXFO0%pi*y_91I]QU%djbqVGi~%X(SxTvUSn", 30444130, 1018442368, (void *)1560310682486473672, -341184353, -397363759, (void *)6455914633601234272, 675790412, 1212509191);
	printf("\nExpected : \n");
	printf("x\vyc:_%Xogx9.%d,2\rG\ns%p%x_~Ab%uvXFO0%pi*y_91I]QU%djbqVGi~%X(SxTvUSn", 30444130, 1018442368, (void *)1560310682486473672, -341184353, -397363759, (void *)6455914633601234272, 675790412, 1212509191);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:46:08 by vgiordan          #+#    #+#             */
/*   Updated: 2022/11/08 15:17:02 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_hex_len(size_t nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

int	ft_print_hexa_process(size_t nb, char *base)
{
	if (nb > 0)
	{
		ft_print_hexa_process(nb / 16, base);
		ft_printchar(base[nb % 16]);
	}
	return (ft_hex_len(nb));
}

int	ft_print_hexa(size_t nb, char *base)
{
	if (nb == 0)
		return (ft_printchar('0'));
	if (nb == 4294967295)
	{
		if (base[15] == 'F')
			return (ft_putstr("FFFFFFFF"));
		else
			return (ft_putstr("ffffffff"));
	}
	return (ft_print_hexa_process(nb, base));
}

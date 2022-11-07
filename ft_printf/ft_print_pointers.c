/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:24:53 by vgiordan          #+#    #+#             */
/*   Updated: 2022/11/07 08:51:02 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(size_t pt)
{
	ft_putstr("0x");
	if (pt == 0)
		return (ft_printchar('0') + 2);
	return (ft_print_hexa(pt, BASEHEXAMIN) + 2);
}

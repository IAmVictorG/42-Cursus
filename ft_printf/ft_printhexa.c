/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:46:08 by vgiordan          #+#    #+#             */
/*   Updated: 2022/11/03 17:52:57 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	isneg(int nbr)
{
	if (nbr < 0)
		return (1);
	return (0);
}

void	ft_printhexa(size_t nb, char *base)
{
	int				mod;
	char			*tab;
	int				i;
	int				is_neg;

	i = 0;
	tab = malloc(16 * sizeof(int));
	is_neg = isneg(nb);
	if (is_neg == 1)
		nb = nb * (-1);
	while (nb >= 16)
	{
		mod = nb % 16;
		nb = nb / 16;
		tab[i++] = base[mod];
	}
	tab[i] = base[nb];
	if (is_neg == 1)
		ft_putchar('-');
	ft_reverse(tab, i + 1);
	ft_putstr(tab);
}

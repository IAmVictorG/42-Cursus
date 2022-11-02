/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:46:08 by vgiordan          #+#    #+#             */
/*   Updated: 2022/11/02 10:04:38 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = temp;
		i++;
		j--;
	}
}

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

	printf("printHEXA");
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
		tab[i + 1] = '-';
	ft_rev_int_tab(tab, 16);
	printf("%s\n", tab);
	ft_putstr(tab);
}

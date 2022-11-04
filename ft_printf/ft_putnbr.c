/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:39:05 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/03 17:55:57 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	getnbsize(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_reverse(char *tab, int size)
{
	int		i;
	char	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	*result;
	int		i;
	int		size;

	size = getnbsize(nb);
	i = 0;
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		result = malloc((size + 1) * sizeof(char));
		while (nb > 0)
		{
			result[i++] = nb % 10 + '0';
			nb /= 10;
		}
		ft_reverse(result, size);
		result[i] = '\0';
		ft_putstr(result);
	}
}

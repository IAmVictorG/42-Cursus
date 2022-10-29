/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:42:42 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:32:48 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	sizeofn(int n)
{
	int	n_size;

	n_size = 0;
	if (n < 0)
	{
		n = -n;
		n_size++;
	}
	while (n > 9)
	{
		n /= 10;
		n_size++;
	}
	n_size++;
	return (n_size);
}

char	*ft_itoa(int n)
{
	int		n_size;
	char	*result;
	int		i;

	i = 0;
	n_size = sizeofn(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc((n_size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	while (n > 9)
	{
		result[n_size - i++ - 2] = n % 10 + '0';
		n /= 10;
	}
	result[n_size - i - 1] = n % 10 + '0';
	result[n_size - 1] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:41:43 by vgiordan          #+#    #+#             */
/*   Updated: 2022/09/08 18:46:02 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	negorpos(char *str)
{
	int	i;
	int	signe;
	int	check;

	signe = 1;
	i = 0;
	check = 1;
	while (!(str[i] <= '9' && str[i] >= '0'))
	{	
		if (str[i] == '-' || str[i] == '+')
			check = 0;
		if (str[i] == '-')
			signe *= -1;
		if (check == 0)
		{	
			if (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
				|| str[i] == '\n'
				|| str[i] == '\v')
				return (0);
		}
		i++;
	}
	return (signe);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	check;
	int	signe;

	check = 0;
	result = 0;
	i = 0;
	signe = negorpos(str);
	if (signe == 0)
		return (0);
	while (str[i] != '\0' && check == 0)
	{
		if ((str[i] <= '9' && str[i] >= '0'))
		{
			result = result * 10 + str[i] - '0';
			if (!(str[i + 1] <= '9' && str[i + 1] >= '0'))
				check = 1;
		}
		i++;
	}
	return (result *= signe);
}
/*
int main()
{
    printf("%d\n", atoi(" -2147483648"));
    printf("%d", ft_atoi(" --+++-+2147483648"));

    return (0);
}*/

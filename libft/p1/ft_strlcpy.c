/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:11:09 by vgiordan          #+#    #+#             */
/*   Updated: 2022/09/06 10:45:06 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	string_length;
	int	tot_string_length;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	string_length = i;
	i = 0;
	tot_string_length = string_length + size;
	while (i < tot_string_length)
	{
		src[string_length + i] = dest[i];
		i++;
	}
	return (*dest);
}

/*
int main()
{
	char message1[] = "Hello Worlddwa";
	char message2[] = "AAAAAAAAAAA";
	int i = 0;
	int n = 10;

	printf("%s", message2);
	i++;

	printf("%c", '\n');
	ft_strlcpy(message2, message1, n);
	i = 0;


	printf("%u", ft_strlcpy(message2, message1, n));
}*/

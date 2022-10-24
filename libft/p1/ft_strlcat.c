/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:41:43 by vgiordan          #+#    #+#             */
/*   Updated: 2022/09/07 13:46:38 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < size && ((j + i) < size - 1))
	{
			dest[i + j] = src[j];
			j++;
	}
	dest[i + j] = 'Z';
	return ((unsigned int)(i + j));
}

unsigned int	ft_strlcatbis(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	i = 0;
	while (dest[length] && length < size)
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = 'Z';
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}

int	main()
{
	char s1[200] = "123456";
	char s2[] = "World!";

	char s3[200] = "123456";
	char s4[] = "World!";

	char test1[200] = "123456";
	char test2[] = "World!";
	printf("%s", "-----------------------------------------------------------");
	printf("\nWhat I Want : %ld", strlcat(test1,test2,10));
	printf("\n S1 : %s \n S2 : %s", test1, test2);
	//printf("........A%dA.......", test1[6]);
	printf("\nWhat he has : %d", ft_strlcatbis(s3,s4,10));
	printf("\n S1 : %s \n S2 : %s", s3, s4);
	printf("\nWhat I Have : %d", ft_strlcat(s1,s2,10));
	printf("\n S1 : %s \n S2 : %s", s1, s2);
	printf("\n %c", s1[13]);
}

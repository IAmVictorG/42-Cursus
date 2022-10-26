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

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	s_dest;
	size_t	s_src;
	size_t	i;

	i = 0;
	s_dest = ft_strlen(dest);
	s_src = ft_strlen(s_src);
	if (s_dest >= size)
		return (s_src + size);
	while (src[i] && (size - 1 > i + s_dest))
	{
		dest[i + s_dest] = src[i];
		i++;
	}
	dest[i + s_dest] = '\0';
	return (s_dest + s_src);
}

/*int	main()
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
}*/

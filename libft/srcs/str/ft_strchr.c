/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:00:01 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 15:00:56 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *) str);
		str++;
	}
	if ((char)c == *str)
		return ((char *)str);
	return (NULL);
}

/*int main(int argc, char const *argv[])
{
	char *test = "teste";

	printf("%s\n", ft_strchr(test, 'x'));
    printf("%p\n", ft_strchr(test, 'x'));
	return 0;
}*/
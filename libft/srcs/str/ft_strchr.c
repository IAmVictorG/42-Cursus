/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:00:01 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 17:07:59 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == *str)
		return ((char *)str);
	return (NULL);
}

/*int main(int argc, char const *argv[])
{
	char *test = "teste";

	printf("%s\n", ft_strchr(test, 'e'));
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:30:28 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/24 12:09:34 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	size_t	i;
	char	*result;

	i = 0;
	s_size = ft_strlen(s);
	if (start > s_size - 1)
	{
		return (NULL);
	}
	if (start + len > s_size)
		result = malloc((s_size - start) * sizeof(char));
	else
		result = malloc(len * sizeof(char));
	while (i < len && s[i] != '\0')
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char *str = "VICTOR victor DAS";
	char *r = ft_substr(str, 6, 50);
	printf("%s", r);
	return 0;
}*/

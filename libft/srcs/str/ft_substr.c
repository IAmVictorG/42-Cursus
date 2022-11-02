/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:30:28 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/31 21:02:41 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	size_t	i;
	char	*result;

	i = 0;
	s_size = ft_strlen(s);
	if (start >= (s_size))
	{
		result = malloc(1 * sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (start + len > s_size)
		result = malloc((s_size - start + 1) * sizeof(char));
	else
		result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char *test = "lorem ipsum";
	
   // printf("%s\n", substr(test, 0, 10));
	printf("%s\n", ft_substr(test, 400, 20));
	return 0;
}
*/
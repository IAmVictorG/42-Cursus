/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:15:31 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/30 17:32:23 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	is_in_charset(char const c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		s_size;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	s_size = ft_strlen(s1);
	while (is_in_charset(s1[i], set) == 1)
		i++;
	while (is_in_charset(s1[s_size - j - 1], set) == 1)
		j++;
	result = malloc((s_size - i - j + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < s_size - j)
		result[k++] = s1[i++];
	result[k] = '\0';
	return (result);
}

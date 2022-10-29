/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:15:31 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/29 02:25:20 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char const c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	*result;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i])
		if (is_in_charset(s1[i++], set) == 0)
			count++;
	result = malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (is_in_charset(s1[i], set) == 0)
			result[j++] = s1[i];
		i++;
	}
	result[j] = '\0';
	return (result);
}

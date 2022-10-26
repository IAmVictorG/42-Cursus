/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:15:31 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/24 14:40:28 by vgiordan         ###   ########.fr       */
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
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

/*int	main(void)
{
	char	*s = "Victeor zkw Gzeizoerdani";
	char	*set = "ezwk";

	printf("%s\n", ft_strtrim(s, set));
	return (0);
}*/

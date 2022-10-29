/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:28:40 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:11:46 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*char_s1;
	char	*char_s2;
	int		char_compare;

	char_s1 = (char *)s1;
	char_s2 = (char *)s2;
	char_compare = 0;
	if (s1 == s2)
		return (char_compare);
	while (n > 0)
	{
		if (*char_s1 != *char_s2)
		{
			char_compare = *char_s1 - *char_s2;
			break ;
		}
		n--;
		(void)*char_s1++;
		(void)*char_s2++;
	}
	if (char_compare < 0)
		return (-1);
	else if (char_compare == 0)
		return (0);
	return (1);
}

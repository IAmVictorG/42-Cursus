/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:28:36 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:56:31 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*result;

	s = (unsigned char *)str;
	while (str && (n--))
	{
		if (*s != (unsigned char)c)
			s++;
		else
		{
			result = s;
			return (result);
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:41:43 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/29 02:56:31 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	s_dest;
	size_t	s_src;
	size_t	i;

	i = 0;
	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
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

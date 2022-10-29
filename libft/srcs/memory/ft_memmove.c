/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:38 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:12:55 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	int		len;
	char	*char_dest;
	char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	i = 0;
	len = ft_strlen(src);
	if ((int)n > len)
		n = len;
	if (!dest)
		return (NULL);
	while (i < (int)n)
	{
		char_dest[i] = char_src[i];
	}
	return (dest);
}

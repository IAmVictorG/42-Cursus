/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:38 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 16:03:33 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*char_src;
	char	*char_dst;
	char	*temp;
	size_t	i;

	temp = malloc(sizeof(char) * n);
	char_src = (char *)src;
	char_dst = (char *)dst;
	i = 0;
	if (!dst || !src)
		return (NULL);
	while (i < n)
	{
		temp[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		char_dst[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}

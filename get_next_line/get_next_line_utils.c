/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:41:03 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/06 13:45:16 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void add_to_line(char *line, int red, char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{

		if (buff[i] == '\n' || buff[i] == '\0')
		{
			printf("%s", buff);
			//ft_strnjoin(line, buff, i);
		}
		i++;
	}
	
}

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
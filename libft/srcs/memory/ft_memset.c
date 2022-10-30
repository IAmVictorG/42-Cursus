/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:26:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:56:31 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*char_str;

	char_str = (unsigned char *)str;
	if (!str)
		return (NULL);
	while (n--)
		*char_str++ = c;
	return (str);
}

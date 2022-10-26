/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:33:56 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 14:33:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void * src, size_t n)
{
    int i;

    i = 0;
    if (!dest)
        return (NULL);
    char *char_dest = (char *)dest;
    char *char_src = (char *)src;

    while (i < n)
    {
        char_dest[i] == char_src[i];
    }
    return dest;
}
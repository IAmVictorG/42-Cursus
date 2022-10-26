/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:38 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 15:11:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(src);
    if (n > len)
        n = len;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:26:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 14:26:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *char_str = (unsigned char *)str;

    if (!str)
        return NULL;
    while (n--)
        *char_str++ = c;
    return str;
}

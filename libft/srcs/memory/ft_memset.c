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
    int i;
    char *char_str = (char *)str;

    i = -1;
    if (!str)
        return NULL;
    while (i++ < n)
    {
        char_str[i] == c;
    }
    return str;
}

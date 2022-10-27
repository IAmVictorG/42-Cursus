/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:28:36 by marvin            #+#    #+#             */
/*   Updated: 2022/10/27 00:28:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *s;
    unsigned char *result;

    s = (unsigned char*)str;
    while(str && (n--))
    {
        if( *s != (unsigned char)c )
            s++;
        else
        {
            result = s;
            return result;
        }
    }
    return (NULL);
    
}
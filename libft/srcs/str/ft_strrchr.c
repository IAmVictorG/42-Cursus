/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:14:31 by marvin            #+#    #+#             */
/*   Updated: 2022/10/27 01:14:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *result;

    while (*str)
    {
        if (*str == c)
            result = (char *)str;
        str++;
    }
    if (result != NULL)
        return (result);
    return (NULL);
}

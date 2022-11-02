/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:14:31 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 13:57:06 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == (char) c)
			result = (char *)str;
		str++;
	}
	if (*str == (char) c)
		result = (char *)str;
	return (result);
}

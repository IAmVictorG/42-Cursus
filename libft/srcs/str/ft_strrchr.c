/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:14:31 by marvin            #+#    #+#             */
/*   Updated: 2022/10/31 00:11:59 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = NULL;
	if (!str)
		return (NULL);
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

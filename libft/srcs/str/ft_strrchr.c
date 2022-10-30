/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:14:31 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 13:14:25 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	while (*str)
	{
		if (*str == c)
			result = (char *)str;
		str++;
	}
	if (*str == c)
		result = (char *)str;
	if (result != NULL)
		return (result);
	return (NULL);
}

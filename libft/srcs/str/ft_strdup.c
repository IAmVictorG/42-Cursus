/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:16:57 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/29 02:56:31 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*src)
		str[i++] = *src++;
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:11:09 by vgiordan          #+#    #+#             */
/*   Updated: 2022/10/29 02:19:04 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	string_length;
	int	tot_string_length;

	i = 0;
	while (src[i] != '\0')
		i++;
	string_length = i;
	i = 0;
	tot_string_length = string_length + size;
	while (i < tot_string_length)
	{
		src[string_length + i] = dest[i];
		i++;
	}
	return (*dest);
}

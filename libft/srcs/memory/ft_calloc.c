/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:16:01 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 02:03:01 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nitems * size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, nitems * size);
	return (tab);
}

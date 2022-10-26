/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:16:57 by vgiordan          #+#    #+#             */
/*   Updated: 2022/09/20 18:30:22 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof(*src) * len);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
/*int main(int argc, char *argv[])
{
	char *src = "";
	ft_strdup(argv[1]);
	
	return 0;
}*/

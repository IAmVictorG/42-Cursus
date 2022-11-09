/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:05:34 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/09 14:28:51 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	//printf("\n-----RESULT-----\n");
	while (i < 1)
	{
		get_next_line(fd);
		//printf("%s", get_next_line(fd));
		i++;
	}
	//printf("\n-----------------\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:05:34 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/07 12:43:07 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char const *argv[])
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while (i < 4)
	{
		get_next_line(fd);
		i++;
	}
	//printf("%s\n", get_next_line(fd));
	/*printf("STRLCAT\n");
	char *s1 = "Victor";
	char *s2 = "Giordani";
	ft_strlcat(s1, s2, 5);
	printf("%s\n", ft_strnjoin(s1, s2, 5));
	strcpy(s1, s2);*/
	return (0);
}

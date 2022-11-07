/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:18:08 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/06 13:31:55 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void my_read(int fd, char *line)
{
	char	*buff;
	int		red;

	red = 1;
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return ;
	while (red != 0)
	{
		red = (int)read(fd, buff, BUFFER_SIZE);
		/*if ((!(*stash) && red == 0) || red == -1)
		{
			free(buff);
			return ;
		}*/
		buff[red] = '\0';
		add_to_line(line, red, buff);
		//free(buff);
	}
}

char *get_next_line(int fd)
{
	char			*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	my_read(fd, line);
	if (line == NULL)
		return (NULL);
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:18:08 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/06 01:02:28 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char			*line;
	static t_list	stash;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	read_to_data(fd, stash);
	if (stash == NULL)
		return (NULL);
	return (line);
}

static void my_read(int fd, t_list **stash)
{
	char	*buff;
	int		red;

	red = 1;
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return ;
	while (new_line_exist(*stash) && red != 0)
	{
		red = (int)read(fd, buff, BUFFER_SIZE);
		if ((!(*stash) && red == 0) || red == -1)
		{
			free(buff);
			return ;
		}
		buff[red] = '\0';
		add_to_remain(*stash, red, buff);
		free(buff);	
	}
}
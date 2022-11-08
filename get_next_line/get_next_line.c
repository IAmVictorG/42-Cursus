/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:18:08 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/08 12:20:31 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_text_to_buffer(int fd)
{
	char	*buffer;
	int		red;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	red = read(fd, buffer, BUFFER_SIZE);
	//printf("RED : %d\n", red);
	//printf("BUFFER : %s\n", buffer);
	buffer[red] = '\0';
	return (buffer);
}

char	*add_buffer_to_line(char *line, int fd)
{
	int			i;
	int			j;
	char		*buffer;
	static char	*remains;

	i = 0;
	j = 0;
	buffer = read_text_to_buffer(fd);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (remains)
	{
		line = ft_strjoin(line, remains);
		free(remains);
		remains = NULL;
	}
	line = ft_strnjoin(line, buffer, i + 1);
	free(buffer);
	if (buffer[i] != '\n')
		return (add_buffer_to_line(line, fd));
	remains = malloc(BUFFER_SIZE - i);
	while (buffer[i++])
		remains[j++] = buffer[i];
	return (line);
}

char	*get_next_line(int fd)
{
	char	*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = "";
	//printf("Result : %s", add_buffer_to_line(line, fd));
	return (NULL);
}

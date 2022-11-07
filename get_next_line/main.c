/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:05:34 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/06 13:51:01 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char const *argv[])
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while (42)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("%s\n", line);
		free(line);
	}
	printf("STRLCAT\n");
	char *s1 = malloc(100);
	char *s2 = "Giordani";
	ft_strlcat(s1, s2, 5);
	printf("%s\n", s1);
	strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
}
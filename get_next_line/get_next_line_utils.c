/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:41:03 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/06 00:58:24 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	new_line_exist(t_list *remain)
{
	int	i;
	t_list *current;

	if (!remain)
		return (0);
	current = get_last(remain);
	i = 0;
	while (current->data[i])
	{
		if (current->data[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_list *get_last(t_list *remain)
{
	while (remain && remain->next)
		remain = remain->next;
	return (remain);
}

void	add_to_remain(t_list remain, int red, char *buff)
{
	t_list	*current;
	t_list	*new_node;
	int		i;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->next = NULL;
	new_node->content = malloc(sizeof(char) * (red + 1));
	if (new_node->data == NULL)
		return ;
	i = 0;
	while (buff[i] && i < red)
	{
		new_node->data[i] = buff[i];
		i++;
	}
	new_node->data[i] = '\0';
	if (*remain == NULL)
	{
		*remain = new_node;
		return ;
	}
	current = get_last(remain);
	current->next = new_node;
}


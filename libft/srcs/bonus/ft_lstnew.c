/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:56:34 by victorgiord       #+#    #+#             */
/*   Updated: 2022/10/31 20:54:40 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mav;

	mav = (t_list *)malloc(sizeof(t_list));
	if (!mav)
		return (NULL);
	mav->content = content;
	mav->next = NULL;
	return (mav);
}

/*int main(int argc, char const *argv[])
{
	printf("%s\n",ft_lstnew("SDA")->content);
	return 0;
}*/

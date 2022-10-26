/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:17 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 15:23:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"




int main()
{
    char *s1 = "AAFAAAA";
    char *s2 = "ABABDEDE";

    
    printf("%d\n", ft_memcmp(s1,s2, 1));
    printf("%d\n", memcmp(s1,s2, 1));

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}

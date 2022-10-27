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
    char *s3 = "tester";
    //ft_bzero(s1, 19);
    
    printf("%d\n", ft_memcmp(s1,s2, 1));
    printf("%d\n", memcmp(s1,s2, 1));

    //char *r = ft_memset(s1, 'H', 40);
    //ft_memset(s1, 'H', 40);

    //printf("%d\n", bzero((void)s1, 10));

    //printf("%p\n", r);
    //printf("%c\n", r[0]);

    printf("%p\n", s1);
    printf("%c\n", s1[0]);
    printf("%p\n", s2);
    printf("%c\n", s2[0]);
    
    printf("s3 : %p\n", s3);
    printf("%s\n", s3);
    char *new_s3 = ft_memchr(s3, 's', 40);
    printf("new s3 : %p\n", new_s3);
    printf("%s\n", new_s3);


    char *s3_new = ft_strchr(s3, 'e');
    printf("s3 : %p\n", s3);
    printf("%s\n", s3);
    printf("s3_new : %p\n", s3);
    printf("%s\n", s3_new);

    char *s_strrchr = ft_strrchr(s3, 't');
    printf("s3 : %p\n", s3);
    printf("%s\n", s3);
    printf("s3_new : %p\n", s_strrchr);
    printf("%s\n", s_strrchr);

    int r = -2345761;
    printf("ITOA\n");
    printf("%s\n", ft_itoa(r));
    return 0;

}

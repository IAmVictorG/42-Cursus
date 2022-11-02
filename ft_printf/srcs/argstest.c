/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argstest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:04:25 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/01 19:13:29 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void    print_ints(int num, ...)
{
    va_list args;
    int     i;

    i = 0;
    va_start(args, num);
    while (i < num)
    {
        int value = va_arg(args,int);
        printf("%d: %d\n", i, value);
        i++;
    }
    va_end(args);
}

int main(int argc, char const *argv[])
{
    print_ints(3, 12, 32, 54);
    return (0);
}

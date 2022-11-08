/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:05:19 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/08 13:43:40 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <strings.h>
# include <stdlib.h>

# ifndef BASEHEXAMIN
#  define BASEHEXAMIN "0123456789abcdef"
# endif
# ifndef BASEHEXAMAJ
#  define BASEHEXAMAJ "0123456789ABCDEF"
# endif

int		ft_printf(const char *s, ...);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_printchar(char c);
void	ft_reverse(char *tab, int size);
int		ft_print_hexa(size_t nb, char *base);
int		ft_print_pointer(size_t pt);
int		ft_print_unsigned_int(unsigned int nb);

#endif
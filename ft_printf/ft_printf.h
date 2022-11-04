/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:05:19 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/03 17:57:13 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <strings.h>
# include <stdlib.h>

# define BASEHEXAMIN "0123456789abcdef"
# define BASEHEXAMAJ "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_reverse(char *tab, int size);
void	ft_printhexa(size_t nb, char *base);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:05:19 by victorgiord       #+#    #+#             */
/*   Updated: 2022/11/02 10:00:12 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <strings.h>
# include <stdlib.h>

# define BASEHEXAMIN "0123456789abcdef"
# define BASEHEXAMAJ "0123456789ABCDEF"

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_printhexa(size_t nb, char *base);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:58:49 by vgiordan          #+#    #+#             */
/*   Updated: 2022/09/20 17:50:57 by vgiordan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	array2dlength(char **strs, int size)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

void	addsep(char *tab, char *sep, int k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		tab[k++] = sep[i++];
}

void	result_fill(char **strs, char *result, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[k] = strs[i][j];
			k++;
			j++;
		}
		i++;
		if (i != size)
		{
			addsep(result, sep, k);
			k += ft_strlen(sep);
		}
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	int		strs_length;
	char	*result;

	k = 0;
	result = NULL;
	if (size == 0)
	{
		result = malloc(0);
		return (result);
	}
	strs_length = array2dlength(strs, size);
	result = malloc(strs_length + (size - 1) * ft_strlen(sep) + 1);
	result_fill(strs, result, sep, size);
	return (result);
}

/*int	main(int argc, char *argv[])
{
	int		size;
	char	*sep;
	char	*tabtest[4];
	(void)	argc;
	(void) argv;

	tabtest[0] = "BAV";
	tabtest[1] = "BBBB";
	tabtest[2] = "CCCCC";
	tabtest[3] = "DDDDDD";
	sep = "+=+";
	size =  4;

	char *str = ft_strjoin(size, tabtest, sep);
	printf("%s", str);
}*/

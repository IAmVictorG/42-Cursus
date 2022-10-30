/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:44:32 by victorgiord       #+#    #+#             */
/*   Updated: 2022/10/30 17:58:14 by victorgiord      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	count_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	**result;

	i = 0;
	k = 0;
	result = (char **)malloc(sizeof(char *) * count_word(s, c));
	while (s[i])
	{
		size = 0;
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + size] != c)
			size++;
		result[k] = malloc(sizeof(char) * (size + 1));
		while (s[i] != c)
			result[k][j++] = s[i++];
		result[k++][j] = '\0';
		i++;
	}
	return (result);
}

/*int main(int argc, char const *argv[])
{
	char *str = "Victor Giordani est malade";
	char c = ' ';
	char **result = ft_split(str,c);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	return 0;
}*/

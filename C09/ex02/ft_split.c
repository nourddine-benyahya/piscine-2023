/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:09:48 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/07 09:07:45 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	sep_checker(char a, char *sep)
{
	int	i;

	if (a == '\0')
		return (1);
	i = 0;
	while (sep[i] != '\0')
	{
		if (a == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	worlds_count(char *str, char *sep)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (!sep_checker(str[i], sep) && sep_checker(str[i + 1], sep))
			res++;
		i++;
	}
	return (res);
}

void	str_cpy(char *str, char *dest, char *sep)
{
	int	i;

	i = 0;
	while (!sep_checker(str[i], sep))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	str_cut(char *str, char *sep, char **array)
{
	int	i;
	int	words;
	int	j;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (sep_checker(str[i], sep))
			i++;
		else
		{
			j = 0;
			while (!sep_checker(str[i + j], sep))
				j++;
			array[words] = (char *)malloc(sizeof(char) * (j + 1));
			if (!array[words])
				return ;
			str_cpy(str + i, array[words], sep);
			words++;
			i += j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		wordsc;

	wordsc = worlds_count(str, charset);
	array = (char **)malloc(sizeof(char *) * (wordsc + 1));
	if (!array)
		return (0);
	array[wordsc] = 0;
	str_cut(str, charset, array);
	return (array);
}
/*
int main()
{
	char *input_str = "a!bc ab,c dd,d";
	char *separator = ",!";
	
	char **result = ft_split(input_str, separator);

	if (result) {
		int i = 0;
		while (result[i] != NULL) {
			printf("Word %d: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}

	return 0;
}*/

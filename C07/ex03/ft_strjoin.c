/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:34:37 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/05 18:26:11 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*reserv_memory(char **strs, char *sep, int size)
{
	int		res;
	int		i;
	char	*str;

	res = 0;
	if (size <= 0)
		res = 1;
	else
	{
		i = 0;
		while (i < size)
		{
			res += len(strs[i]);
			i++;
		}
	}
	str = (char *)malloc(res + (len(sep) * (size - 1)) + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

void	the_concat_looper(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		x;

	x = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[x] = strs[i][j];
			j++;
			x++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			str[x] = sep[j];
			j++;
			x++;
		}
		i++;
	}
	str[x] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
		return (0);
	str = reserv_memory(strs, sep, size);
	the_concat_looper(size, strs, sep, str);
	return (str);
}

int main()
{
	char *strs[]={};
	char sep[]="";
	int size = 0;
	printf("%p",ft_strjoin(size, strs, sep));
}

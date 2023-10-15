/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:28:07 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/05 22:03:29 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_checker(char *str)
{
	int	i;
	int	j;
	int	len;

	len = str_len(str);
	if (len <= 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (j < len - 1)
		{
			if (str[i] == str[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (a == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	signe;

	if (!base_checker(base) || str_len(base) <= 1)
		return (0);
	i = 0;
	res = 0;
	signe = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (get_index(str[i], base) && (str[i] >= '0' || str[i] <= '9'))
	{
		res = res * str_len(base) + ((get_index(str[i], base) - 1));
		i++;
	}
	if (signe % 2 == 0)
		return (res * 1);
	return (res * -1);
}
/*
int		main()
{
	("%d\n", ft_atoi_base("+++   933742", "0123456789"));
	("%d\n", ft_atoi_base("	     ---101010", "01"));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:45:37 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/03 20:36:41 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_str_cpy(char *str)
{
	int		i;
	int		len;
	char	*ptr;

	len = str_len(str);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i; 
	t_stock_str	*stocker;

	stocker = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stocker)
		return (0);
	i = 0;
	while (i < ac)
	{
		stocker[i].size = str_len(av[i]);
		stocker[i].str = av[i];
		stocker[i].copy = ft_str_cpy(av[i]);
		i++;
	}
	stocker[i].size = 0;
	stocker[i].str = 0;
	stocker[i].copy = 0;
	return (stocker);
}

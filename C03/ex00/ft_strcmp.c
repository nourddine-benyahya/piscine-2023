/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:24:25 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/08/21 17:05:41 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	deff;

	i = 0;
	deff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		deff = s1[i] - s2[i];
		if (deff != 0)
			return (deff);
		i++;
	}
	return (deff);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:09:29 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/04 10:20:15 by nbenyahy         ###   ########.fr       */
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

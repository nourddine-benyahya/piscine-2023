/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:13:51 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/08/29 16:07:26 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *)malloc((max - min) * 4);
		if (range == NULL)
			return (-1);
		else
		{
			i = 0;
			while (min < max)
			{
				(*range)[i] = min;
				i++;
				min++;
			}
		}
	}
	return (i);
}

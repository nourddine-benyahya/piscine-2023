/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:26:44 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/08/23 15:12:36 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	par;

	i = 0;
	par = argc - 1;
	while (par > i)
	{
		j = 0;
		while (argv[par][j] != '\0')
		{
			ft_putchar(argv[par][j]);
			j++;
		}
		ft_putchar('\n');
		par--;
	}
}

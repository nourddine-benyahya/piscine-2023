/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:28:39 by kadam             #+#    #+#             */
/*   Updated: 2023/08/20 11:20:32 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a );

void	print(int I, char schar, char mchar, char echar)
{
	int	starti;

	starti = 1;
	while (starti <= I)
	{
		if (starti == 1)
			ft_putchar(schar);
		else if (starti == I)
			ft_putchar(echar);
		else
			ft_putchar(mchar);
		starti++;
	}
	ft_putchar('\n');
}

void	rush(int i, int j)
{
	int	startj;

	startj = 1;
	while (startj <= j)
	{
		if (startj == 1)
			print(i, 'A', 'B', 'A');
		else if (startj == j)
			print(i, 'C', 'B', 'C');
		else
			print(i, 'B', ' ', 'B');
		startj++;
	}
}

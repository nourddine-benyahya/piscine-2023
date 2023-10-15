/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:47:08 by iscourr           #+#    #+#             */
/*   Updated: 2023/08/20 11:09:01 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int I, char schar, char mchar, char echar)
{
	int	starti;

	starti = 1;
	while (starti <= I)
	{
		if (starti == 1)
		{
			ft_putchar(schar);
		}
		else if (starti == I)
		{
			ft_putchar(echar);
		}
		else
		{
			ft_putchar(mchar);
		}
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
		{
			print(i, 'o', '-', 'o');
		}
		else if (startj == j)
		{
			print(i, 'o', '-', 'o');
		}
		else
		{
			print(i, '|', ' ', '|');
		}
		startj++;
	}
}

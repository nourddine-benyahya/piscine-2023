/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:07:57 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/08/17 12:38:31 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char a)
{
	write(1, &a, 1);
}

void	printnumbr(int a, int b)
{
	ft_put_char(a / 10 + 48);
	ft_put_char(a % 10 + 48);
	ft_put_char(' ');
	ft_put_char(b / 10 + 48);
	ft_put_char(b % 10 + 48);
	if (a == 98 && b == 99)
		return ;
	ft_put_char(',');
	ft_put_char(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			printnumbr(a, b);
			b++;
		}
		a++;
	}
}

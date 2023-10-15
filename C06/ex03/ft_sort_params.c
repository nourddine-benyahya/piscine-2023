/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:59:58 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/08/28 18:02:17 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	camp_argv(char *argv_one, char *argv_two)
{
	int	i;

	i = 0;
	while (argv_one[i] != '\0' || argv_two[i] != '\0')
	{
		if (argv_one[i] != argv_two[i])
			return (argv_one[i] - argv_two[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*helper;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (camp_argv(argv[i], argv[j]) > 0)
			{
				helper = argv[i];
				argv[i] = argv[j];
				argv[j] = helper;
			}
			j++;
		}
		i++;
	}
	print_argv(argv);
}

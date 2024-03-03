/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:23:03 by fneri             #+#    #+#             */
/*   Updated: 2024/03/03 15:09:06 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_parsing(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else if (argv[i][j] == '-' && argv[i][j + 1] >= '0'
			&& argv[i][j + 1] <= '9')
				j++;
			else if (argv[i][j] == '+' && argv[i][j + 1] >= '0'
			&& argv[i][j + 1] <= '9')
				j++;
			else
				return (0);
		}
		j = 0;
		i++;
	}
	return (1);
}

bool ft_check_double(char **argv)
{
	int	i;
	int	k;

	i = 1;
	k = 1;
	while (argv[i])
	{
		while (argv[k])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[k]) && i != k)
				return (0);
			k++;
		}
		k = 1;
		i++;
	}
	return (1);
}

bool	ft_max_int(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < INT_MAX || ft_atoi(argv[i]) > INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
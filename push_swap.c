/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:23:03 by fneri             #+#    #+#             */
/*   Updated: 2024/01/27 20:57:46 by fneri            ###   ########.fr       */
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:23:03 by fneri             #+#    #+#             */
/*   Updated: 2024/01/24 16:11:33 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_parsing(char **argv)
{
	while (*argv)
	{
		if (argv <= INT_MIN && argv >= INT_MAX)
			return (0);
		else if ((argv == '-' || argv == '+')
			&& (argv++ == '-' || argv++ == '+'))
			return (0);
		argv++;
	}
	return (1);
}
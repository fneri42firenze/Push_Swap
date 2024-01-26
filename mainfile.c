/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filippomartinoneri <filippomartinoneri@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:00:59 by fneri             #+#    #+#             */
/*   Updated: 2024/01/26 11:58:47 by filippomart      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lista	*stack_a;
	t_lista	*stack_b;

	if (argc == 1 || (argc == 2 && !argv[2][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_atoi(*argv);
	if (!ft_parsing(argv))
		stack_a = ft_create_stack(argv);
	stack_b = NULL;
	return (0);
}

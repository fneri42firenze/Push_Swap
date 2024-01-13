/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:00:59 by fneri             #+#    #+#             */
/*   Updated: 2024/01/13 19:37:18 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int *argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[2][0]))
		return (1);
	else if (argc == 2)
		argv = get_next_line(argv[1], ' ');
	ft_init_stack_a(&stack_a, argv + 1);
	if (!ft_stack_sorted(stack_a))
	{
		if (ft_stack_len(stack_a) == 2)
			ft_sa(&stack_a, false);
		else if (ft_stack_len(stack_a) == 3)
			ft_sort_three(&stack_a);
		else
			ft_sort(&stack_a, &stack_b);
	}
	ft_free_stack(&stack_a);
	return (0);
}
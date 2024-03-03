/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:00:59 by fneri             #+#    #+#             */
/*   Updated: 2024/02/28 17:55:33 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (ft_parsing(argv))
			stack_a = ft_create_stack_onestring(argv);
	}
	else
	{
		if (ft_parsing(argv))
			stack_a = ft_create_stack(argv);
	}
	stack_b = NULL;

	printf("stack_a\n");
	ft_print_stack(stack_a);
	printf("stack_b\n");
	ft_print_stack(stack_b);
	return (0);
}

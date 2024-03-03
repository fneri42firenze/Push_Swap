/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:00:59 by fneri             #+#    #+#             */
/*   Updated: 2024/03/03 15:54:47 by fneri            ###   ########.fr       */
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
		if (ft_parsing(argv) && ft_check_double(argv) && ft_max_int(argv))
			stack_a = ft_create_stack_onestring(argv);
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		if (ft_parsing(argv) && ft_check_double(argv) && ft_max_int(argv))
			stack_a = ft_create_srtack(argv);
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	stack_b = NULL;

	printf("stack_a\n");
	ft_print_stack(stack_a);
	printf("stack_b\n");
	ft_print_stack(stack_b);
	return (0);
}

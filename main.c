/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:00:59 by fneri             #+#    #+#             */
/*   Updated: 2024/01/22 19:59:17 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int *argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1 || (argc == 2 && !argv[2][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!ft_parsing(argv))
		stack_a = ft_create_stack(argv);
	stack_b = NULL;
	return (0);
}

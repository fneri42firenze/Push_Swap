/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:42 by fneri             #+#    #+#             */
/*   Updated: 2024/01/27 21:31:35 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_node(int value)
{
	t_stack	*new_node;
	//char	*str;

	new_node = malloc(sizeof(t_stack));
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*ft_create_stack(char **values)
{
	t_stack	*list;
	t_stack	*temp;
	int		i;

	list = ft_new_node(ft_atoi(values[1]));
	temp = list;
	i = 2;
	while (values[i])
	{
		temp->next = ft_new_node(ft_atoi(values[i]));
		temp = temp->next;
		i++;
	}
	return (list);
}
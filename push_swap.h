/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:52:00 by fneri             #+#    #+#             */
/*   Updated: 2024/01/17 18:01:57 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <../libft_extended/libft.h>
# include <../ft_printf/ft_printf.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}		t_list;

int			main(int *argc, char **argv);
t_list		*ft_new_node(int value);
t_list		*ft_create_stack(char **values);

#endif
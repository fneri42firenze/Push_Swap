/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:52:00 by fneri             #+#    #+#             */
/*   Updated: 2024/01/27 19:43:38 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "libft_extended/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_lista
{
	int				value;
	struct s_lista	*next;
}		t_stack;

t_stack		*ft_new_node(int value);
t_stack		*ft_create_stack(char **values);
void	ft_pa(t_stack **stack_b, t_stack **stack_a);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
bool	ft_parsing(char **argv);

#endif
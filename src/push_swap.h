/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:24:15 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 16:37:46 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
#include <limits.h>

typedef struct	s_element
{
	int					num;
	struct s_element	*next;
	struct s_element	*prev;
}	t_element;

typedef struct	s_stack
{
	t_element	*first;
	t_element	*last;
	int			size;
	int			min;
	int			max;
	long		average;
	char		name;
}	t_stack;

int	insert_first_elem(t_stack *stack, int number);
int	add_end_stack(t_stack *stack, t_element *last_element, int number);
void	check_value(t_stack *stack, long int number);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
void	sort_stack(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_in, t_stack *stack_out);
void	rotate(t_stack *stack);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	rev_rotate(t_stack *stack);
void	rev_rotate_both(t_stack *stack_a, t_stack *stack_b);
void	sort_small_stack(t_stack *a);
int		check_sort(t_stack *a);
int		check_rev_sort(t_stack *b);
void	new_sort(t_stack *a);
void	new_sort_rev(t_stack *b, t_stack *a);
void	ft_sort_int_tab(int *tab, int size);
void 	move(t_stack *a, t_stack *b, int i, int num_element);
void	move_to_b_again(t_stack *a2, t_stack *b);

#endif

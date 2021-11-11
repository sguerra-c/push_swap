/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:30:29 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 17:50:40 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move(t_stack *a, t_stack *b, int i, int num_element)
{
	while (b->size < num_element)
	{
		if (a->first->num < i)
		{
			push(b, a);
			if (b->size > 1 && b->first->num < b->first->next->num)
					swap(b);
		}
		else
			break ;
	}
	while (b->size < num_element)
	{
		if (a->last->num < i)
		{
			rev_rotate(a);
			push(b, a);
			if (b->size > 2 && b->first->num < b->first->next->num)
				swap(b);
		}
		else
		break ;
	}
	while (b->size < num_element)
	{
		if (a->first->num < i)
		{
			if(a->first->num > a->first->next->num && a->first->next->num < i)
				swap(a);
			else
			{
				push(b, a);
			}
		}
		else
			rotate(a);
	}
}

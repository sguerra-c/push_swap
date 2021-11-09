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

void	move(t_stack *a, t_stack *b, int i)
{
	int count;

	count = a->size;
	while (count > 0)
	{
		if (a->first->num < i)
			push(b, a);
		else
			rotate(a);
		count--;
	}
}

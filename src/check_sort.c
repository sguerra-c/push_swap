/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:45:22 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/05 10:50:19 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_sort(t_stack *a)
{
	int i;
	t_element *element;

	i = 1;
	element = a->first;
	while (i < a->size)
	{
		if (element->num < element->next->num)
			i++;
		else
			return (0);
		element = element->next;
	}
	return (1);
}

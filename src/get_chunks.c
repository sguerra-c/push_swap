/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_chunks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:10:50 by sguerra-          #+#    #+#             */
/*   Updated: 2021/11/09 15:25:46 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int *get_chunks(t_stack *stack)
{
	int sort_list[stack->size];
	int i;
	int decile;
	int *chunks;
	t_element *element;
	
	i = 0;
	element = stack->first;
	while (element)
	{
		sort_list[i] = element->num;
		element = element->next;
		i++;
	}
	ft_sort_int_tab(sort_list, stack->size);
	i = stack->size / 10;
	decile = 0;
	chunks = malloc(11 * sizeof(int));
	chunks[0] = stack->min;
	while (++decile < 10)
		chunks[decile] = sort_list[decile * i];
	chunks[10] = stack->max;
	return (chunks);
}

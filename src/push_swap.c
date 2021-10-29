/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:26:53 by sguerra-          #+#    #+#             */
/*   Updated: 2021/10/29 17:20:29 by sguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	init_stack(t_stack *stack, char stackname)
{
	stack->first = NULL;
	stack->last = NULL;
	stack->size = 0;
	stack->name = stackname;
}

char	***get_values(int argc, char **argv)
{
	char ***values;
	int i;
	int j;

	values = malloc(argc * sizeof(values));
	argc = 1;
	i = -1;
	while (argv[argc])
	{
		values[++i] = ft_split(argv[argc], ' ');
		j = -1;
		while (values[i][++j])
			if (ft_isnumeric(values[i][j]) == 0)
			{	
				write(1, "Error\n", 6);
				exit (-1);
			}
		argc++;
	}
	values[argc - 1] = NULL;
	return (values);
}

void	copy_args(t_stack *stack, int argc, char **argv)
{
	char ***values;
	int i;
	int j;

	values = get_values(argc, argv);
	if (!values)
		return ;
	stack->size += insert_first_elem(stack, ft_atoi(values[0][0]));
	free(values[0][0]);
	i = 0;
	j = 1;
	while (values[i])
	{
		while (values[i][j])
		{
			stack->size += add_end_stack(stack, stack->last, ft_atoi(values[i][j]));
			free(values[i][j]);
			j++;
		}
		j = 0;
		free(values[i]);
		i++;
	}
	free(values);
	stack->average = stack->average / stack->size;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack *stack_b;

	if (!argv[1])
		return (0);
	stack_a = malloc(5 * sizeof(stack_a));
	stack_b = malloc(5 * sizeof(stack_b));
	init_stack(stack_a, 'a');
	init_stack(stack_b, 'b');
	copy_args(stack_a, argc, argv);
	//print_stack(stack_a, stack_b);
	get_chunks(stack_a);
	//sort_stack(stack_a, stack_b);
	//print_stack(stack_a, stack_b);
	//system("leaks push_swap");
	return(0);
}


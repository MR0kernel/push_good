/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:57:50 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 11:00:30 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	t_utils	*utils;

	if (argc < 2)
		return (0);
	stack = (t_stack *)malloc(sizeof(t_stack));
	utils = (t_utils *)malloc(sizeof(t_utils));
	init_all(stack, utils);
	parse_input(stack, utils, argc, argv);
	stack->stack_a = (ssize_t *)malloc(sizeof(ssize_t) * stack->size_a);
	stack->stack_b = (ssize_t *)malloc(sizeof(ssize_t) * stack->size_a);
	fill_stack_a(stack, utils, utils->numbers);
	set_max(stack);
	set_min(stack);
	sort_master(stack);
	clean_exit(stack, utils);
	return (0);
}

void	set_min(t_stack *stack)
{
	ssize_t	tmp;
	ssize_t	index;

	index = 1;
	tmp = stack->stack_a[0];
	while (index < stack->size_a)
	{
		if (stack->stack_a[index] < tmp)
			tmp = stack->stack_a[index];
		index++;
	}
	stack->min = tmp;
}

void	set_max(t_stack *stack)
{
	ssize_t	tmp;
	ssize_t	index;

	index = 1;
	tmp = stack->stack_a[0];
	while (index < stack->size_a)
	{
		if (stack->stack_a[index] > tmp)
			tmp = stack->stack_a[index];
		index++;
	}
	stack->max = tmp;
}

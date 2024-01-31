/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:07:10 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 15:36:42 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static ssize_t	set_max_bits(t_stack *stack);

void	radix(t_stack *stack)
{
	ssize_t	index;
	ssize_t	second_index;
	ssize_t	max_bits;
	ssize_t	size;

	second_index = 0;
	max_bits = set_max_bits(stack);
	while (second_index < max_bits)
	{
		index = 0;
		size = stack->size_a;
		while (index < size)
		{
			if (((stack->stack_a[0] >> second_index) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			index++;
		}
		while (stack->size_b > 0)
			pa(stack);
		second_index++;
	}
}

static ssize_t	set_max_bits(t_stack *stack)
{
	ssize_t	index;
	ssize_t	max;
	ssize_t	max_bits;

	index = 1;
	max = stack->stack_a[0];
	while (index < stack->size_a)
	{
		if (stack->stack_a[index] > max)
			max = stack->stack_a[index];
		index++;
	}
	max_bits = 0;
	while (max != 0)
	{
		max_bits++;
		max = max >> 1;
	}
	return (max_bits);
}

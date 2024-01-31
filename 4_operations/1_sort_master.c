/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_sort_master.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:56:37 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 20:50:36 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_stack *stack);
static void	reverse_rotate(t_stack *stack);

void	sort_master(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_two(stack);
	else if (stack->size_a == 3)
		sort_three(stack);
	else if (stack->size_a == 4)
		sort_four(stack);
	else if (stack->size_a == 5)
		sort_five(stack);
	else if (stack->min < 0)
	{
		rotate(stack);
		radix(stack);
		reverse_rotate(stack);
	}
	else
		radix(stack);
	return ;
}

static ssize_t	ft_abs(ssize_t n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	rotate(t_stack *stack)
{
	int	index;

	index = 0;
	while (index < stack->size_a)
	{
		stack->stack_a[index] += ft_abs(stack->min);
		index++;
	}
}

static void	reverse_rotate(t_stack *stack)
{
	int	index;

	index = 0;
	while (index < stack->size_a)
	{
		stack->stack_a[index] -= ft_abs(stack->min);
		index++;
	}
}

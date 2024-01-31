/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:27:07 by tchorniy          #+#    #+#             */
/*   Updated: 2024/01/30 08:57:28 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack *stack)
{
	if (!check_sort(stack))
		return ;
	if (stack->stack_a[0] == stack->max && stack->stack_a[2] == stack->min)
	{
		ra(stack);
		sa(stack);
	}
	if (stack->stack_a[0] == stack->min && stack->stack_a[1] == stack->max)
	{
		pb(stack);
		sa(stack);
		pa(stack);
	}
	if (stack->stack_a[1] == stack->min && stack->stack_a[2] == stack->max)
		sa(stack);
	if (stack->stack_a[1] == stack->max && stack->stack_a[2] == stack->min)
	{
		sa(stack);
		ra(stack);
		sa(stack);
	}
	if (stack->stack_a[0] == stack->max && stack->stack_a[1] == stack->min)
		ra(stack);
}

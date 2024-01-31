/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:57:22 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 20:21:26 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>

void	sort_four(t_stack *stack)
{
	if (stack->stack_a[3] == stack->min)
	{
		rra(stack);
	}
	else
		while (stack->stack_a[0] != stack->min)
			ra(stack);
	pb(stack);
	set_min(stack);
	sort_three(stack);
	pa(stack);
}

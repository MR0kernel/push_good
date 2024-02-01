/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:34:13 by tchorniy          #+#    #+#             */
/*   Updated: 2024/02/01 10:19:55 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(t_stack *stack)
{
	if (stack->stack_a[4] == stack->min)
	{
		rra(stack);
	}
	else
		while (stack->stack_a[0] != stack->min)
			ra(stack);
	pb(stack);
	set_min(stack);
	sort_four(stack);
	pa(stack);
}

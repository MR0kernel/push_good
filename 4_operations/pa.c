/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:03:42 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack)
{
	ssize_t	index;

	index = stack->size_a;
	while (index > 0)
	{
		stack->stack_a[index] = stack->stack_a[index - 1];
		index--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	index = 0;
	while (index < stack->size_b - 1)
	{
		stack->stack_b[index] = stack->stack_b[index + 1];
		index++;
	}
	stack->size_a++;
	stack->size_b--;
	ft_putstr_fd("pa\n", 1);
}

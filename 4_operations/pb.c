/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:02 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 10:17:00 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_stack *stack)
{
	ssize_t	index;

	index = stack->size_b;
	if (stack->size_a < 1)
		return ;
	while (index > 0)
	{
		stack->stack_b[index] = stack->stack_b[index - 1];
		index--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	index = 0;
	while (index < stack->size_a - 1)
	{
		stack->stack_a[index] = stack->stack_a[index + 1];
		index++;
	}
	stack->size_a--;
	stack->size_b++;
	ft_putstr_fd("pb\n", 1);
}

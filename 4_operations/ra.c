/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:13 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 10:17:50 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack)
{
	ssize_t	index;
	ssize_t	tmp;

	index = 0;
	if (stack->size_a < 2)
		return ;
	tmp = stack->stack_a[0];
	while (index < stack->size_a - 1)
	{
		stack->stack_a[index] = stack->stack_a[index + 1];
		index++;
	}
	stack->stack_a[index] = tmp;
	ft_putstr_fd("ra\n", 1);
}

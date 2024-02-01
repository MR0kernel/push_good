/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:52 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 10:19:28 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(t_stack *stack_b)
{
	ssize_t	index;
	ssize_t	tmp;

	if (stack_b->size_b < 2)
		return ;
	index = stack_b->size_b - 1;
	tmp = stack_b->stack_b[stack_b->size_b - 1];
	while (index > 0)
	{
		stack_b->stack_b[index] = stack_b->stack_b[index - 1];
		index--;
	}
	stack_b->stack_b[0] = tmp;
	ft_putstr_fd("rrb\n", 1);
}

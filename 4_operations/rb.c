/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:22 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 10:18:20 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(t_stack *stack_b)
{
	ssize_t	index;
	ssize_t	tmp;

	index = 0;
	if (stack_b->size_b < 2)
		return ;
	tmp = stack_b->stack_b[0];
	while (index < stack_b->size_b)
	{
		stack_b->stack_b[index] = stack_b->stack_b[index + 1];
		index++;
	}
	stack_b->stack_b[stack_b->size_b - 1] = tmp;
	ft_putstr_fd("rb\n", 1);
}

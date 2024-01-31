/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:39 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack_a)
{
	ssize_t	index;
	ssize_t	tmp;

	index = stack_a->size_a - 1;
	tmp = stack_a->stack_a[stack_a->size_a - 1];
	while (index > 0)
	{
		stack_a->stack_a[index] = stack_a->stack_a[index - 1];
		index--;
	}
	stack_a->stack_a[0] = tmp;
	ft_putstr_fd("rra\n", 1);
}

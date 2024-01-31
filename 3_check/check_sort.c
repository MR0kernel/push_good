/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:58:03 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

ssize_t	check_sort(t_stack *stack)
{
	ssize_t	index;
	ssize_t	tmp;

	index = 1;
	tmp = stack->stack_a[0];
	while (index < stack->size_a)
	{
		if (tmp > stack->stack_a[index])
		{
			return (1);
		}
		tmp = stack->stack_a[index];
		index++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:11:45 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_duplicates(t_stack *stack_a, t_utils *utils)
{
	ssize_t	index;
	ssize_t	index2;

	index = 0;
	while (index < stack_a->size_a)
	{
		index2 = index + 1;
		while (index2 < stack_a->size_a)
		{
			if (stack_a->stack_a[index] == stack_a->stack_a[index2])
			{
				basic_error_handler(stack_a, utils, 1);
			}
			index2++;
		}
		index++;
	}
}

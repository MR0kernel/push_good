/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_fill_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:24:30 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 20:56:19 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	clear_buffer(char buffer[11])
{
	ssize_t	index;

	index = 0;
	while (index < 11)
	{
		buffer[index] = '\0';
		index++;
	}
}

static void	checks(t_stack *stack_a, t_utils *utils)
{
	check_duplicates(stack_a, utils);
	if (check_sort(stack_a) == 0)
		clean_exit(stack_a, utils);
}

void	fill_stack_a(t_stack *stack_a, t_utils *utils, char *numbers)
{
	ssize_t	index;
	ssize_t	j;
	char	number_to_push[11];

	index = 0;
	j = 0;
	clear_buffer(number_to_push);
	while (j < stack_a->size_a)
	{
		index = 0;
		while (*numbers && *numbers != ' ')
		{
			number_to_push[index] = *numbers;
			index++;
			numbers++;
		}
		if (*numbers + 1)
			numbers++;
		number_to_push[index] = '\0';
		stack_a->stack_a[j] = ft_atoi(number_to_push);
		clear_buffer(number_to_push);
		check_size(stack_a, utils, stack_a->stack_a[j]);
		j++;
	}
	checks(stack_a, utils);
}

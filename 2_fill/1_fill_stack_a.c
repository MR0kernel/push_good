/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_fill_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:24:30 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 19:17:55 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	checks(t_stack *stack_a, t_utils *utils)
{
	check_duplicates(stack_a, utils);
	if (check_sort(stack_a) == 0)
		clean_exit(stack_a, utils);
}

size_t	find_new_index(char *numbers)
{
	int	i;

	i = 0;
	while ((numbers[i] >= 9 && numbers[i] <= 13) || numbers[i] == 32)
		i++;
	if (numbers[i] == '+' || numbers[i] == '-')
		i++;
	while (numbers[i] >= '0' && numbers[i] <= '9')
		i++;
	return (i);
}

void	fill_stack_a(t_stack *stack_a, t_utils *utils, char *numbers)
{
	ssize_t	index;
	ssize_t	j;

	index = 0;
	j = 0;
	while (j < stack_a->size_a)
	{
		stack_a->stack_a[j] = ft_atoi(&numbers[index]);
		index += find_new_index(&numbers[index]);
		check_size(stack_a, utils, stack_a->stack_a[j]);
		j++;
	}
	checks(stack_a, utils);
}

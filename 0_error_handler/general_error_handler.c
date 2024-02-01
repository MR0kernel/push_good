/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_error_handler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:09:21 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 11:16:56 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	basic_error_handler(t_stack *stack, t_utils *utils, ssize_t error_code)
{
	if (error_code == 1)
		write(2, "Error\n", 6);
	if (stack)
	{
		if (stack->stack_a)
			free(stack->stack_a);
		if (stack->stack_b)
			free(stack->stack_b);
		free(stack);
	}
	if (utils)
	{
		if (utils->numbers)
			free(utils->numbers);

		free(utils);
	}
	exit(1);
}

void	clean_exit(t_stack *stack, t_utils *utils)
{
	if (stack->stack_a)
		free(stack->stack_a);
	if (stack->stack_b)
		free(stack->stack_b);
	if (utils->numbers)
		free(utils->numbers);
	if (stack)
		free(stack);
	if (utils)
		free(utils);
	exit(0);
}

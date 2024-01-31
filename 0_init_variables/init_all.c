/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:41:55 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/30 12:44:06 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_all(t_stack *stack, t_utils *utils)
{
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	stack->size_a = 0;
	stack->size_b = 0;
	stack->min = 0;
	stack->max = 0;
	utils->numbers = NULL;
	utils->nb = 0;
}

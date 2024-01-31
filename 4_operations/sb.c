/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:05:19 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_stack *stack_b)
{
	ssize_t	tmp;

	tmp = stack_b->stack_b[0];
	stack_b->stack_b[0] = stack_b->stack_b[1];
	stack_b->stack_b[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

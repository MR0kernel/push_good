/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:05:07 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 10:15:20 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	ssize_t	tmp;

	if (stack_a->size_a < 2)
		return ;
	tmp = stack_a->stack_a[0];
	stack_a->stack_a[0] = stack_a->stack_a[1];
	stack_a->stack_a[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

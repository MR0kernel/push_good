/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:20:40 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 20:49:56 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_size(t_stack *stack, t_utils *utils, ssize_t number)
{
	ssize_t	max;
	ssize_t	min;

	max = 2147483648;
	min = -2147483649;
	if (number >= max || number <= min)
		basic_error_handler(stack, utils, 1);
}

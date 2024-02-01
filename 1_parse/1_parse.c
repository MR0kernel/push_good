/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_parse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 08:55:51 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 11:08:59 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static ssize_t	total_numbers_count(t_stack *stack, t_utils *utils)
{
	ssize_t	i;
	ssize_t	count;

	i = 0;
	count = 1;
	while (utils->numbers[i])
	{
		if (utils->numbers[i] == ' ')
			count++;
		i++;
	}
	if (count <= 1)
		clean_exit(stack, utils);
	return (count);
}

static void	fix(char *str)
{
	ssize_t	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i - 1] == ' ')
		str[i - 1] = '\0';
}

static ssize_t	len(t_stack *stack, t_utils *utils, char *str)
{
	ssize_t	index;
	ssize_t	check_number;

	index = 0;
	check_number = 0;
	while (str[index])
	{
		if ((str[index] >= '0' && str[index] <= '9'))
			check_number = 1;
		index++;
	}
	if (index == 0 || check_number == 0)
		basic_error_handler(stack, utils, 1);
	return (index);
}

static ssize_t	is_number(t_stack *s, t_utils *u, char *c, ssize_t index)
{
	if (c[index] >= '0' && c[index] <= '9')
		return (1);
	else if ((c[index] == '-' || c[index] == '+') && \
				(c[index + 1] >= '0' && c[index + 1] <= '9') && \
				(!c[index - 1] || c[index - 1] <= ' '))
		return (1);
	else if (c[index] == '\0' || c[index] == ' ' || \
				c[index] == '\t' || c[index] == '\n')
		return (0);
	else
		basic_error_handler(s, u, 1);
	return (0);
}

void	parse_input(t_stack *stack, t_utils *utils, ssize_t a, char **c)
{
	ssize_t	i;
	ssize_t	y;
	ssize_t	len_str;

	i = 1;
	while (i < a)
	{
		y = 0;
		len_str = len(stack, utils, c[i]);
		while (y < len_str)
		{
			utils->numbers = rebuild(stack, utils, utils->numbers, ' ');
			while (y < len_str && (c[i][y] == ' ' || \
					c[i][y] == '\t' || c[i][y] == '\n'))
				y++;
			while (is_number(stack, utils, c[i], y))
				utils->numbers = \
				rebuild(stack, utils, utils->numbers, c[i][y++]);
		}
		i++;
		if (i < a)
			utils->numbers = rebuild(stack, utils, utils->numbers, ' ');
	}
	fix(utils->numbers);
	stack->size_a = total_numbers_count(stack, utils);
}

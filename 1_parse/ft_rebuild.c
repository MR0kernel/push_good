/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rebuild.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:53:45 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 11:22:59 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static ssize_t	ft_strlen(char *str)
{
	ssize_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

static char	*alloc_one(t_stack *stack, t_utils *utils, char c)
{
	char	*new;

	new = malloc(sizeof(char) * 2);
	if (!new)
		basic_error_handler(stack, utils, 0);
	new[0] = c;
	new[1] = '\0';
	return (new);
}

char	*rebuild(t_stack *stack, t_utils *utils, char *old, char c)
{
	char	*new;
	ssize_t	index;

	if (!old && c == ' ')
		return (NULL);
	if (!old)
	{
		new = alloc_one(stack, utils, c);
		return (new);
	}
	if (c == ' ' && old[ft_strlen(old) - 1] == ' ')
		return (old);
	index = 0;
	new = malloc(sizeof(char) * (ft_strlen(old) + 2));
	if (!new)
		basic_error_handler(stack, utils, 0);
	while (old[index])
	{
		new[index] = old[index];
		index++;
	}
	new[index] = c;
	new[index + 1] = '\0';
	return (free(old), new);
}

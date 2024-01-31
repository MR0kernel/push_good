/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rebuild.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:53:45 by guilrodr          #+#    #+#             */
/*   Updated: 2024/01/31 13:49:09 by guilrodr         ###   ########lyon.fr   */
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

static char	*alloc_one(char c)
{
	char	*new;

	new = malloc(sizeof(char) * 2);
	if (!new)
		exit(1);
	new[0] = c;
	new[1] = '\0';
	return (new);
}

char	*rebuild(char *old, char c)
{
	char	*new;
	ssize_t	index;

	if (!old && c == ' ')
		return (NULL);
	if (!old)
	{
		new = alloc_one(c);
		return (new);
	}
	if (c == ' ' && old[ft_strlen(old) - 1] == ' ')
		return (old);
	index = 0;
	new = malloc(sizeof(char) * (ft_strlen(old) + 2));
	if (!new)
		return (NULL);
	while (old[index])
	{
		new[index] = old[index];
		index++;
	}
	new[index] = c;
	new[index + 1] = '\0';
	return (free(old), new);
}

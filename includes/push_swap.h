/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilrodr <guilrodr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 07:55:53 by guilrodr          #+#    #+#             */
/*   Updated: 2024/02/01 11:07:34 by guilrodr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_utils
{
	char			*numbers;
	ssize_t			nb;
}	t_utils;

typedef struct s_stack
{
	ssize_t						*stack_a;
	ssize_t						*stack_b;
	ssize_t						size_a;
	ssize_t						size_b;
	ssize_t						max;
	ssize_t						min;
}								t_stack;

void	parse_input(t_stack *stack, t_utils *utils, ssize_t a, char **c);
void	check_duplicates(t_stack *stack_a, t_utils *utils);
void	check_size(t_stack *stack, t_utils *utils, ssize_t number);
ssize_t	check_sort(t_stack *stack);
void	set_min(t_stack *stack);
void	set_max(t_stack *stack);
void	init_all(t_stack *stack, t_utils *utils);
void	fill_stack_a(t_stack *stack_a, t_utils *utils, char *numbers);
void	sort_master(t_stack *stack);

// minilib
void	ft_putstr_fd(char *s, ssize_t fd);
ssize_t	ft_atoi(const char *str);
char	*rebuild(t_stack *stack, t_utils *utils, char *old, char c);

// operations
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	ra(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ra(t_stack *stack);
void	rra(t_stack *stack_a);
void	radix(t_stack *stack);

void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *stack);
void	sort_five(t_stack *stack);

// Error messages
void	basic_error_handler(t_stack *stack, t_utils *utils, ssize_t error_code);
void	clean_exit(t_stack *stack, t_utils *utils);

void	print_stacks(t_stack *stack);

#endif

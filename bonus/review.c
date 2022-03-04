/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   review.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:58 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:58 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../Libft/libft.h"

/* review calls fill_stack_a() and check_sort_a() to check if stack a is sorted */
void	review(t_storage **storage)
{
	if (!storage)
		return ;
	fill_stack_a(storage);
	if (check_sort_a(storage) == 1)
	{
		OK_actions(storage);
	}
	else
	{
		read_instructions(storage);
	}
}

/* error_actions outputs 'Error' and starts the cleaning of resources */
void	error_actions(t_storage **storage)
{
	write(2, "Error\n", 6);
	free_storage(storage);
	exit(-1);
}

int	check_sort_a(t_storage **storage)
{
	t_stack		*first;
	t_stack		*second;

	first = (*storage)->a;
	second = (*storage)->a;
	if (!first)
		error_actions(storage);
	while (second->next != NULL)
	{
		second = second->next;
		if (first->value >= second->value)
			break;
		first = first->next;
	}
	if (second->next == NULL && first->value <= second->value)
		return (1);
	return (0);
}

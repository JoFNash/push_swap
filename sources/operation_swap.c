/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:44 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:34:49 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

/* allowed operations for stacks a and b */
void	swap_a(t_storage **storage)
{
	if (do_swap_a(storage))
		ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_storage **storage)
{
	if (do_swap_b(storage))
		ft_putstr_fd("sb\n", 1);
}

void	swap_a_and_b(t_storage **storage)
{
	if (do_swap_a(storage) && do_swap_b(storage))
		ft_putstr_fd("ss\n", 1);
}

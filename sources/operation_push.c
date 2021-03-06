/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:36 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/08 21:53:03 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	push_a(t_storage **storage)
{
	if (do_push_a(storage))
		ft_putstr_fd("pa\n", 1);
}

void	push_b(t_storage **storage)
{
	if (do_push_b(storage))
		ft_putstr_fd("pb\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:02:31 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:02:31 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	start_sort(t_storage **storage)
{
	int	elems;

	elems = (*storage)->argc;
	if (elems <= 5)
	{
		start_little_sort(storage, elems);
	}
	else
	{
		start_big_sort(storage);
	}
	result_actions(storage);
}

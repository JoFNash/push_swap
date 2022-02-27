#include "push_swap.h"
#include "Libft/libft.h"

void	fill_stack_a(p_storage **storage)
{
	size_t	i;
	size_t	j;
	char	*string;

	i = 1;
	j = 0;
	string = (*storage)->argv[i];
	find_errors(storage);
	fill(storage, string, i);
	check_duplicates(storage);
}

int		check_sign(char *string)
{
	if (string[0] == '-' && ft_isdigit(string[1]))
		return (1);
	return (0);
}

/* find_errors checks argv on error: invalid characters */
void	find_errors(p_storage **storage)
{
	char	*string;
	size_t	i;

	i = 1;
	string = (*storage)->argv[i];
	while (string)
	{
		while (*string)
		{
			if (*string == ' ' || ft_isdigit(*string))
				string++;
			else if (*string == '-' && ft_isdigit(*(string + 1)) &&
				(string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else if (*string == '+' && ft_isdigit(*(string + 1)) &&
				(string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else
				error_actions(storage);
		}
		string = (*storage)->argv[++i];
	}
}

void	fill(p_storage **storage, char *str, size_t i)
{
	long int	number_checked_on_int;

	while (str)
	{
		number_checked_on_int = atoi_push_swap(str, storage);
		if (number_checked_on_int > INT_MAX || number_checked_on_int < INT_MIN)
			error_actions(storage);
		else
		{
			add_stack_end(storage, &((*storage)->a), number_checked_on_int, 0);
		}
		str = (*storage)->argv[++i];
	}
}

void	check_duplicates(p_storage **storage)
{
	p_stack	*first;
	p_stack	*second;

	first = (*storage)->a;
	while (first != NULL)
	{
		second = first->next;
		while (second != NULL)
		{
			if (first->value == second->value)
			{
				error_actions(storage);
			}
			second = second->next;
		}
		first = first->next;
	}
}

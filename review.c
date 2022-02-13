#include "push_swap.h"
#include "../Libft/libft.h"

/* review calls fill_stack_a() and check_sort_a() to check if stack a is sorted */
void review(p_storage *storage)
{
    if (!storage)
        return ;
    fill_stack_a(storage);
    check_sort_a(storage);
    /* .(?). */
}

void fill_stack_a(p_storage *storage)
{
    size_t  i;
    size_t  j;
    char*   string;

    i = 1;
    j = 0;
    string = storage->argv[i];
    find_errors(storage);
    //fill(storage, string, i, j);
    
    //check_duplicates(storage);
    
}

/* find_errors checks argv on error: not int */
void find_errors(p_storage *storage)
{
    char    *string;
    size_t  i;

    i = 1;
    string = storage->argv[i];
    while (string)
    {
        while(*string)
        {
            if (*string == ' ' || ft_isdigit(*string))
                string++;
            else if (*string == '-' && ft_isdigit(*(string + 1)) && (string == storage->argv[i] || *(string - 1) == ' '))
                string++;
            else if (*string == '+' && ft_isdigit(*(string + 1)) && (string == storage->argv[i] || *(string - 1) == ' '))
                string++;
            else
                error_actions(storage);
        }
        string = storage->argv[++i];
    }
}

// -127 98 0 78 32 -129

void    fill(p_storage *storage, char *str, size_t i, size_t j)
{
    long int number;

    while (str)
    {
        while (*str)
        {
            //if ()
            // str++ (?)
        }
        str = storage->argv[++i];
    }
}

/* error_actions outputs 'Error' and starts the cleaning of resources */
void error_actions(p_storage *storage)
{
    write(1, "Error\n", 6);
    free_storage(storage);
}

void check_sort_a(p_storage *storage)
{
	
}

void check_duplicates(p_storage *storage)
{

}
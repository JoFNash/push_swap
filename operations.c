#include "push_swap.h"

/* allowed operations for stacks a and b */
void swap_a(p_storage **storage)
{
    int tmp_value;
    p_stack *stack_a;

    stack_a = (*storage)->a;
    if (stack_a && stack_a->next != NULL)
    {
        tmp_value = stack_a->value;
        stack_a->value = stack_a->next->value;
        stack_a->next->value = tmp_value;
        write(1, "sa\n", 3);
    }
}

void swap_b(p_storage **storage)
{
    int tmp_value;
    p_stack *stack_b;

    stack_b = (*storage)->b;
    if (stack_b && stack_b->next != NULL)
    {
        tmp_value = stack_b->value;
        stack_b->value = stack_b->next->value;
        stack_b->next->value = tmp_value;
        write(1, "sb\n", 3);
    }
}

void swap_a_and_b(p_storage **storage)
{
    swap_a(storage);
    swap_b(storage);
    write("ss");
}

void push_a(p_storage **storage)
{
    int value_b;

    if (storage->b)
    {
        Remove_top_stack(storage, &((*storage)->b), value_b);
        Add_stack_top(storage, &((*storage)->b), value_b);
    }
}

void push_b(p_storage **storage)
{
    
}

void rotate_a(p_storage **storage)
{
    
}

void rotate_b(p_storage **storage)
{
    
}

void rotate_a_and_b(p_storage **storage)
{
    
}

void reverse_rotate_a(p_storage **storage)
{
    
}

void reverse_rotate_b(p_storage **storage)
{
    
}

void reverse_rotate_a_and_b(p_storage **storage)
{
	
}
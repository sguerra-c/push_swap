#include "push_swap.h"

void    check_value(t_stack *stack, long int number)
{
    t_element *element;

    element = stack->first;
    if (number > 2147483647 || number < -2147483648)
    {
        write(1, "Error\n", 6);
        exit(-1);
    }
    while(element)
    {
        if (element->num == number)
            {
                write(1, "Error\n", 6);
                exit(-1);
            }
        else
            element = element->next;
    }
}
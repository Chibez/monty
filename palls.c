#include "monty.h"

/**
 * f_pall - Prints the elements of the stack
 * @stack: Pointer to the stack
 * @counter: Not used (avoiding unused parameter warnings)
 * Return: No return value
 */
void f_pall(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    (void)counter;

    current = *stack;
    if (current == NULL)
        return;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

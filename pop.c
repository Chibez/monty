#include "monty.h"

/**
 * f_pop - Removes the top element of the stack
 * @head: Pointer to the stack
 * @counter: Line number
 * Return: No return value
 */
void f_pop(stack_t **head, unsigned int counter)
{
    stack_t *temp;

    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;
    *head = temp->next;
    if (*head)
        (*head)->prev = NULL;

    free(temp);
}

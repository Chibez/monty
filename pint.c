#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack
 * @head: Pointer to the stack
 * @counter: Line number
 * Return: No return value
 */
void f_pint(stack_t **head, unsigned int counter)
{
	(void)counter;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", counter);
		// Handle cleanup or return error code if needed
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

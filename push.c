#include "monty.h"

void f_push(stack_t **stack, char *arg, unsigned int line_number)
{
    int value, index = 0, invalidInteger = 0;

    if (arg)
    {
        if (arg[0] == '-')
            index++;
        for (; arg[index] != '\0'; index++)
        {
            if (arg[index] > '9' || arg[index] < '0')
            {
                invalidInteger = 1;
                break;
            }
        }

        if (invalidInteger)
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            // Handle cleanup or return error code
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        // Handle cleanup or return error code
    }

    value = atoi(arg);

    // Your existing logic for adding to the stack or queue
    // addnode(stack, value);
}

void pall(stack_t **stack, char *arg, unsigned int line_number)
{
    // Your existing logic for pall opcode
}

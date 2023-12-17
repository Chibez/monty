#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;                  // Integer value stored in the node
    struct stack_s *prev;   // Pointer to the previous element in the stack or queue
    struct stack_s *next;   // Pointer to the next element in the stack or queue
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
    char *opcode;                       // Opcode string
    void (*f)(stack_t **stack, unsigned int line_number);  // Pointer to a function handling the opcode
} instruction_t;

void f_push(stack_t **stack, char *arg, unsigned int line_number);
void pall(stack_t **stack, char *arg, unsigned int line_number);
void f_pall(stack_t **stack, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);

#endif /* MONTY_H */

#include "monty.h"

int main(int argc, char **argv) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 2) {
        fprintf(stderr, "USAGE: %s file\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Initialize an empty stack
    stack_t *stack = NULL;

    // Read the file and perform stack operations
    read_file(argv[1], &stack);

    // Clean up: free memory allocated for the stack
    free_dlistint(stack);

    return EXIT_SUCCESS;
}

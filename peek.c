#include "monty.h"

/**
 * peek - Prints the top node of the stack.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of of the opcode.
 */
void peek(stack_t **st, unsigned int line_number)
{
	if (st == NULL || *st == NULL)
		errors_6_9(6, line_number);
	printf("%d\n", (*st)->n);
}

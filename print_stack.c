#include "monty.h"

/**
 * print_stack - prints the stack.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of  the opcode.
 */
void print_stack(stack_t **st, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	if (st == NULL)
		exit(EXIT_FAILURE);
	tmp = *st;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

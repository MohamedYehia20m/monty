#include "monty.h"

/**
 * sub_nodes - subtracts the top two elements of the stack.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of of the opcode.
 */
void sub_nodes(stack_t **st, unsigned int line_number)
{
	int sum;

	if (st == NULL || *st == NULL || (*st)->next == NULL)
		errors_6_9(8, line_number, "sub");
	(*st) = (*st)->next;
	sum = (*st)->n - (*st)->prev->n;
	(*st)->n = sum;
	free((*st)->prev);
	(*st)->prev = NULL;
}

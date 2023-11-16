#include "monty.h"

/**
 * pop_top - remove the top of the stack.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of of the opcode.
 */
void pop_top(stack_t **st, unsigned int line_number)
{
	stack_t *tmp;

	if (st == NULL || *st == NULL)
		errors_6_9(7, line_number);
	tmp = *st;
	*st = tmp->next;
	if (*st != NULL)
		(*st)->prev = NULL;
	free(tmp);
}

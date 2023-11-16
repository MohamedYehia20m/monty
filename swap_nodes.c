#include "monty.h"

/**
 * swap_nodes - Swaps the top two elements of the stack.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of of the opcode.
 */
void swap_nodes(stack_t **st, unsigned int line_number)
{
	stack_t *tmp;

	if (st == NULL || *st == NULL || (*st)->next == NULL)
		errors_6_9(8, line_number, "swap");
	tmp = (*st)->next;
	(*st)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *st;
	tmp->next = *st;
	(*st)->prev = tmp;
	tmp->prev = NULL;
	*st = tmp;
}

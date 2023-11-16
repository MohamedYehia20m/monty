#include "monty.h"

/**
 * rotl - Rotates the first node of the stack to the bottom.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @ln: line number of of the opcode.
 */
void rotl(stack_t **st, __attribute__((unused))unsigned int ln)
{
	stack_t *tmp;

	if (st == NULL || *st == NULL || (*st)->next == NULL)
		return;
	tmp = *st;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *st;
	(*st)->prev = tmp;
	*st = (*st)->next;
	(*st)->prev->next = NULL;
	(*st)->prev = NULL;
}

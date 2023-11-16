#include "monty.h"

/**
 * rotr - Rotates the last node of the stack to the top.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @ln: line number of of the opcode.
 */
void rotr(stack_t **st, __attribute__((unused))unsigned int ln)
{
	stack_t *tmp;

	if (st == NULL || *st == NULL || (*st)->next == NULL)
		return;
	tmp = *st;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *st;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*st)->prev = tmp;
	(*st) = tmp;
}

#include "monty.h"

/**
 * div_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @ln: Interger representing the line number of of the opcode.
 */
void div_nodes(stack_t **stack, unsigned int ln)
{
	int submission;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, ln, "div");

	if ((*stack)->n == 0)
		more_err(9, ln);
	(*stack) = (*stack)->next;
	submission = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = submission;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

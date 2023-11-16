#include "monty.h"

/**
 * print_str - Prints a string.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @ln: line number of of the opcode.
 */
void print_str(stack_t **st, __attribute__((unused))unsigned int ln)
{
	int ascii;
	stack_t *tmp;

	if (st == NULL || *st == NULL)
	{
		printf("\n");
		return;
	}
	tmp = *st;
	while (tmp != NULL)
	{
		ascii = tmp->n;
		if (ascii <= 0 || ascii > 127)
			break;
		printf("%c", ascii);
		tmp = tmp->next;
	}
	printf("\n");
}

#include "monty.h"

/**
 * print_char - Prints the Ascii value.
 * @st: Pointer to a pointer pointing to top of the stack.
 * @line_number: line number of of the opcode.
 */
void print_char(stack_t **st, unsigned int line_number)
{
	int ascii;

	if (st == NULL || *st == NULL)
		errors_10_11(11, line_number);
	ascii = (*st)->n;
	if (ascii < 0 || ascii > 127)
		errors_10_11(10, line_number);
	printf("%c\n", ascii);
}

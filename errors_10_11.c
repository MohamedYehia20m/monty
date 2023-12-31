#include "monty.h"

/**
 * errors_10_11 - handles errors.
 * @error_code: The error codes are the following:
 * (10) ~> The number inside a node is outside ASCII bounds.
 * (11) ~> The stack is empty.
 */
void errors_10_11(int error_code, ...)
{
	va_list ag;
	int l_number;

	va_start(ag, error_code);
	l_number = va_arg(ag, int);
	switch (error_code)
	{
		case 10:
			fprintf(stderr, "L%d: can't use pchar, value out of range\n", l_number);
			break;
		case 11:
			fprintf(stderr, "L%d: can't use pchar, stack empty\n", l_number);
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}

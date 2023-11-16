#include "monty.h"

/**
 * parse_line - Separates each line into tokens to determine
 * which function to call
 * @bf: line from the file
 * @ln: line number
 * @format:  storage format. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int parse_line(char *bf, int ln, int format)
{
	char *opcode, *value;
	const char *delim = "\n ";

	if (bf == NULL)
		err(4);

	opcode = strtok(bf, delim);
	if (opcode == NULL)
		return (format);
	value = strtok(NULL, delim);

	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);

	find_func(opcode, value, ln, format);
	return (format);
}

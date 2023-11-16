#include "monty.h"

/**
 * read_file - reads a file.
 * @fd: file descriptor.
 *
 * Return: void
 */
void read_file(FILE *fd)
{
	int ln, format = 0;
	char *buffer = NULL;
	size_t len = 0;

	for (ln = 1; getline(&buffer, &len, fd) != -1; ln++)
		format = parse_line(buffer, ln, format);
	free(buffer);
}

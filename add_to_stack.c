#include "monty.h"


/**
 * push - Adds a node to the stack.
 * @new_element: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void push(stack_t **new_element, __attribute__((unused))unsigned int ln)
{
	stack_t *temp;

	if (new_element == NULL || *new_element == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_element;
		return;
	}
	temp = head;
	head = *new_element;
	head->next = temp;
	temp->prev = head;
}

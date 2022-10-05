#include "monty.h"

/**
 * swap - swaps the first two elements
 */
void swap(void)
{
	stack_t *temp;

	if (!global.head || !global.head->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", 1u);
		global.quit = EXIT_FAILURE;
		return;
	}
	temp = global.head->next;
	global.head->next = temp->next;
	temp->next = global.head;
	global.head->prev = temp;
	temp->prev = NULL;
	global.head = temp;
}

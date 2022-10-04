#include "main.h"

/**
 * clear_memory - clears memory
 */
void clear_memory()
{
	stack_t *temp;

	/* Clear Data structure */
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

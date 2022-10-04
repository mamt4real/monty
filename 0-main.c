#include "main.h"

stack_t *tail = NULL; 
stack_t *head = NULL;

/**
 * main - entry point
 * @argc - argument count
 * @argv - arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i = 1;
	for (; i < 11; i++)
		push(i);
	print_stack();
	for (i = 0; i < 5; i++)
		dequeue();
	print_queue();

	return (0);
}

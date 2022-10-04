#include "main.h"

/* Initialise Global variables */
stack_t *tail = NULL; 
stack_t *head = NULL;
int mode = STACK;
unsigned int line = 1;
int quit = 0;

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
	div_tops();
	swap();
	print_stack();
	/* mode = QUEUE;
	swap();
	print_queue();
	swap(); */


	return (0);
}

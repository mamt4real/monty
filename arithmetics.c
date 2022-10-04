#include "main.h"

/**
 * add_tops - adds the top two elements
 */
void add_tops()
{
	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
	{
		head->next->n += head->n;
		pop();
	}
	else
	{
		tail->prev->n += tail->n;
		dequeue();
	}
}

/**
 * sub_top - subs the top two elements
 */
void sub_tops()
{
	int res;

	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
	{
		res = head->n - head->next->n;
		head->next->n = res;
		pop();
	}
	else
	{
		res = tail->n - tail->prev->n;
		tail->prev->n = res;
		dequeue();
	}
}

/**
 * mul_tops - mul the top two elements
 */
void mul_tops()
{
	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
	{
		head->next->n *= head->n;
		pop();
	}
	else
	{
		tail->prev->n *= tail->n;
		dequeue();
	}
}

/**
 * div_tops - div the top two elements
 */
void div_tops()
{
	int res;

	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't div, stack too short\n", line);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
	{
		res = head->n / head->next->n;
		head->next->n = res;
		pop();
	}
	else
	{
		res = tail->n / tail->prev->n;
		tail->prev->n = res;
		dequeue();
	}
}

/**
 * mod_tops - mod the first two elemwnts
 */
void mod_tops()
{
	int res;

	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", line);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
	{
		res = head->n % head->next->n;
		head->next->n = res;
		pop();
	}
	else
	{
		res = tail->n % tail->prev->n;
		tail->prev->n = res;
		dequeue();
	}
}

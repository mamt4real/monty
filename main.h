#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK 0
#define QUEUE 1

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* ========== Globals =========== */
extern stack_t *head;
extern stack_t *tail;
extern int mode;
extern unsigned int line;
extern int quit;

/* =========== Handlers ============ */
void push_handler(stack_t **, unsigned int);
void pall_handler(stack_t **, unsigned int);
void pop_handler(stack_t **, unsigned int);
void swap_handler(stack_t **, unsigned int);
void add_handler(stack_t **, unsigned int);
void nop_handler(stack_t **, unsigned int);
void sub_handler(stack_t **, unsigned int);
void mul_handler(stack_t **, unsigned int);
void div_handler(stack_t **, unsigned int);
void mod_handler(stack_t **, unsigned int);


/* =========== Stack Ops =========== */
void push(int);
int pop();
void print_stack();

/* =========== Queue Ops =========== */
int dequeue();
void print_queue();
void enqueue(int n);

/* =========== custome Ops =========== */
void swap();
void add_tops();
void sub_tops();
void mul_tops();
void div_tops();
void mod_tops();

/* ========== File handlers ========= */


/* ========== Helpers ========== */


/* ========== Memory functions ========== */
void clear_memory();

#endif /* MAIN_H */

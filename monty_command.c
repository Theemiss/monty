#include "monty.h"
/**
 * push_monty - Pushes An Element To The Stack.
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void push_monty(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *n_node;

	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
		handle_error(1);
	if (_isdigit(info.arg[1]) > 0)
		handle_error(5);
	n_node->prev = NULL;
	n_node->next = *stack;
	n_node->n = atoi(info.arg[1]);
	if (*stack != NULL)
		(*stack)->prev = n_node;
	*stack = n_node;
}
/**
 * pall_monty - Prints All The Values On The Stack
 * @stack: Pointer To The Head
 * @line_number: Line Number
 * Return: Void
 */
void pall_monty(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	int i;
	stack_t *node;

	node = *stack;
	for (i = 0; node; i++)
	{
		fprintf(stdout, "%d\n", node->n);
		node = node->next;
	}
}
/**
 * pint_monty - prints the value at the top of the stack
 * @stack: Pointer To The Head
 * @line_number: Line Number
 */
void pint_monty(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	if (*stack == NULL)
		handle_error(6);
	fprintf(stdout, "%d\n", (*stack)->n);
}

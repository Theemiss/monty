#include "monty.h"
/**
 * _stack - sets the format of the data to a stack (LIFO). This is the default
 * @stack: Pointer To The Head
 * @line_number: Line Number
 * Return: Void
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	info.type = LIFO;
}

/**
 * _queue - sets the format of the data to a queue (FIFO).
 * @stack: Pointer To The Head
 * @line_number: Line Number
 * Return: Void
 *
 * Return: None
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	info.type = FIFO;
}
/**
 * add_node_lifo - add lifo
 * @stack: head of stack
 * @n_node: the node to add
 */
void add_node_lifo(stack_t **stack, stack_t *n_node)
{
	n_node->prev = NULL;
	n_node->next = *stack;
	if (*stack)
		(*stack)->prev = n_node;
	*stack = n_node;
}

/**
 * add_node_fifo - add node fifo
 * @stack: head of stack
 * @n_node: the node to add
 */
void add_node_fifo(stack_t **stack, stack_t *n_node)
{
	stack_t *tmp = *stack;

	n_node->next = NULL;
	if (!*stack)
	{
		n_node->prev = NULL;
		*stack = n_node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = n_node;
		n_node->prev = tmp;
	}
}

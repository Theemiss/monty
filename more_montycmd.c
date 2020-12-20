#include "monty.h"
/**
 * swap_monty - swap the top two element
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void swap_monty(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *head = *stack;
	int check;
	stack_t *top, *under_top;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(8);
	top = head;
	under_top = head->next;
	top->next = under_top->next;
	top->prev = under_top;
	if (under_top->next)
		under_top->next->prev = top;
	under_top->next = top;
	under_top->prev = NULL;
	(*stack) = under_top;
}

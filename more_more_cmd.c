#include "monty.h"
/**
 * div_monty -  divides the second top element and second top
* @stack:Pointer To The Head
 * @line_number: Line Number
 */
void div_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int check, sum = 0;
	stack_t *top1, *top2;
	(void)line_number;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(11);
	top1 = head;
	top2 = head->next;
	if (top2->n == 0)
		handle_error(12);

	sum = top1->n / top2->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}

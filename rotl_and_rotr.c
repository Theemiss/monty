#include "monty.h"
/**
 * rotl_monty -  rotates the stack to the top
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void rotl_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int temp = 0, len;
	(void)line_number;

	len = dlistint_len(head);
	if (len < 2)
		return
	temp = head->n;
	while (head->next != NULL)
	{
		head = head->next;
		head->prev->n = head->n;
	}
	head->n = temp;
}
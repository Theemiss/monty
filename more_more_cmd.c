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
	if (top1->n == 0)
		handle_error(12);

	sum = top2->n / top1->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}
/**
 * mul_monty -  multiplies the second top element and top element
 * @stack:Pointer To The Head
 * @line_number: Line Number
 */
void mul_monty(stack_t **stack, unsigned int line_number)
{
		stack_t *head = *stack;
	int check, sum = 0;
	stack_t *top1, *top2;
	(void)line_number;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(13);
	top1 = head;
	top2 = head->next;
	sum = top2->n * top1->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}
/**
 * mod_monty -  mod the second top element and top element
 * @stack:Pointer To The Head
 * @line_number: Line Number
 */
void mod_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int check, sum = 0;
	stack_t *top1, *top2;
	(void)line_number;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(14);
	top1 = head;
	top2 = head->next;
	if (top1->n == 0)
		handle_error(12);

	sum = top2->n % top1->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}

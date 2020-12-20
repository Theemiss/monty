#include "monty.h"
/**
 * swap_monty - swap the top two element
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void swap_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int check;
	stack_t *top, *under_top;
	(void)line_number;

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
/**
 * add_monty - adds the top two elements of the stack.
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void add_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int check, sum = 0;
	stack_t *top1, *top2;
	(void)line_number;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(9);
	top1 = head;
	top2 = head->next;
	sum = top1->n + top2->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}
/**
 * nop_monty - do nothing
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void nop_monty(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * sub_monty - subtracts the top element of the stack
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void sub_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int check, sum = 0;
	stack_t *top1, *top2;
	(void)line_number;

	check = dlistint_len(head);
	if (check < 2)
		handle_error(10);
	top1 = head;
	top2 = head->next;
	sum = top2->n - top1->n;
	(*stack)->n = sum;
	delete_dnodeint_at_index(stack, 1);
}

#include "monty.h"
/**
 * pchar_monty -  prints the char at the top of the stack
 * @stack: Pointer To The head
 * @line_number: The Line Number
 * Return:Void
 */
void pchar_monty(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	(void)line_number;

	if (*stack == NULL)
		pchar_error();
	if (head->n >= 65 && head->n <= 90)
	{
		putchar(head->n);
		putchar('\n');
	}
	else if (head->n >= 97 && head->n <= 122)
	{
		putchar(head->n);
		putchar('\n');
	}
	else
	{
		pchar_error_2();
	}
}
/**
 * pchar_error - error in case of empty stack
 */
void pchar_error(void)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", info.l_number);
	free_info();
	exit(EXIT_FAILURE);
}
/**
 * pchar_error_2 - error in case value out of range
 */
void pchar_error_2(void)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", info.l_number);
	free_info();
	exit(EXIT_FAILURE);
}

#include "monty.h"
/**
 *push_use - Usage of push command error
 */
void push_use(void)
{
	fprintf(stderr, "L%d: usage: push integer\n", info.l_number);
	free_info();
}
/**
 * pint_error - error when using pint command in empty stack
 */
void pint_error(void)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", info.l_number);
	free_info();
}
/**
 * pop_error - error when stack is empty
 */
void pop_error(void)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", info.l_number);
	free_info();
}
/**
 * swap_error - error when the stack len less than 2
 */
void swap_error(void)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", info.l_number);
	free_info();
}

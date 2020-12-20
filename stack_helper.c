
#include "monty.h"
/**
 * dlistint_len - Return list len
 * @stack:head of stack or Queue
 * Return:list len
 */
int dlistint_len(stack_t *stack)
{
	int len = 0;
	int i = 0;

	for (i = 0; stack; i++)
	{
		len += 1;
		stack = stack->next;
	}
	return (len);
}

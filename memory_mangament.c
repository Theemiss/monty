#include "monty.h"
/**
 * free_info - free data
 *
 *
 */
void free_info(void)
{
	free(info.cmd);
	info.cmd = NULL;
	free(info.arg);
	info.arg = NULL;
	fclose(info.fp);
}
/**
 * free_list - free list
 * @stack: stack or queue
 */
void free_list(stack_t *stack)
{
	stack_t *node;

	while (stack)
	{
		node = stack;
		stack = stack->next;
		free(node);
	}
}

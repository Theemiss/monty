
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
/**
 *  delete_dnodeint_at_index - delete node at give index
 *	@head:list
 * @index:given index
 * Return: -1 or 0
 */
int delete_dnodeint_at_index(stack_t **head, int index)
{
	stack_t *start;
	 int i;
	 int len = dlistint_len(*head);

	start = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		start = start->next;
		free(*head);
		*head = start;
		if (start != NULL)
			start->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		start = start->next;
		if (!start)
			return (-1);
	}
	if (len - 1 == index)
	{
		start->prev->next = NULL;
		free(start);
		return (1);
	}
	start->prev->next = start->next;
	start->next->prev = start->prev;
	free(start);
	return (1);
}

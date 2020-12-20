#include "monty.h"
/**
 * add_error - error when add command and stack too short
 */
void add_error(void)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", info.l_number);
	free_info();
}
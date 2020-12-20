#include "monty.h"
/**
 * add_error - error when add command and stack too short
 */
void add_error(void)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", info.l_number);
	free_info();
}
/**
 * sub_error - error when sub command and stack too short
 */
void sub_error(void)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", info.l_number);
	free_info();
}
/**
 * monty_usage - error for interpteur usage
 */
void monty_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
}
/**
 * div_error - error when stack too short command div
 */
void div_error(void)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", info.l_number);
	free_info();
}

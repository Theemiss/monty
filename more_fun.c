#include "monty.h"

/**
 * _zero - error when top stack is 0 can t do div or mod command
 */
void _zero(void)
{
	fprintf(stderr, "L%d: division by zero\n", info.l_number);
	free_info();
}
/**
 * mul_error - error when stack is too short to do mul command
 */
void mul_error(void)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", info.l_number);
	free_info();
}
/**
 * mod_error - error when stack is too short to do mod command
 */
void mod_error(void)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", info.l_number);
	free_info();
}

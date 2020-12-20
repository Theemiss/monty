#include "monty.h"

/**
 * _div - error when top stack is 0 can t do div command
 */
void _div(void)
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

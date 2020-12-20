#include "monty.h"

/**
 * _div - error when top stack is 0 can t do div command
 */
void _div(void)
{
	fprintf(stderr, "L%d: division by zero\n", info.l_number);
	free_info();
}

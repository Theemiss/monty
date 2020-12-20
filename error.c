#include "monty.h"
/**
 * handle_error - print errors
 * @code: exit code
 */
void handle_error(int code)
{
	error_t er[] = {
		{1, malloc_fail},
		{2, monty_usage},
		{3, file_perm},
		{4, unknown_command},
		{5, push_use},
		{0, NULL}
	};
	int i = 0;

	while ((er + i)->out)
	{
		if ((er + i)->out == code)
		{
			(er + i)->error_type();
			exit(EXIT_FAILURE);
		}
		i++;
	}
}
/**
 * malloc_fail - error in case malloc fail
 */
void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
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
 * file_perm - error for no permession or can t open file
 */
void file_perm(void)
{
	fprintf(stderr, "Error: Can't open file %s\n", info.fn);
}
/**
 * unknown_command - Unknown command error
 */
void unknown_command(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			info.l_number, info.arg[0]);
		free_info();
}

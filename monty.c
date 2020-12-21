#include "monty.h"
/**
 * main - an interpreter for Monty ByteCodes files.
 * @argc: Argument Count
 * @argv: Argument Value
 * Return: Exit_Succes(0) or Exit_Failure(1)
 */
int main(int argc, char **argv)
{
	info.type = LIFO;
	if (argc != 2)
		handle_error(2);
	else
	{
	treat_monty(argv[1]);
	}
	return (EXIT_SUCCESS);
}

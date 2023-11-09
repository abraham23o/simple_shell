#include "shell.h"

/**
 * read_args - get input passed to the shell
 * @args: input as string
 * @size: length of string passed
 * Return: nothing
 */
void read_args(char *args, size_t size)
{
	if (fgets(args, size, stdin) == NULL)
	{
		my_print("\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	args[strcspn(args, "\n")] = '\0';
}

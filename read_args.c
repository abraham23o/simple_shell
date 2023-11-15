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

	args[strcspn(args, "\n")] = '\0';

	if (strcmp(args, "exit") == 0)
	{
		my_print("exit\n");
		exit(EXIT_SUCCESS);
	}
}

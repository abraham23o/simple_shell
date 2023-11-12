#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0, success
 */
int main(void)
{
	char args[120];

	while (1)
	{
		user_prompt();
		read_args(args, sizeof(args));
		exec_command(args);
	}
	return (0);
}

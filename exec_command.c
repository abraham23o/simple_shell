#include "shell.h"

/**
 * exec_command - execute the command passed
 * @command: command to be executed
 * Return: nothing
 */
void exec_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("Error!");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

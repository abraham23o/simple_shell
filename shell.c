#include "shell.h"

/**
 * parse_cmd - parse commands
 * @str: user input
 * @args: stores an array of strings after tokenization
 * Return: nothing
 */
void parse_cmd(char *str, char **args)
{
	/* Tokenize the input based on whitespace */
	char *token = strtok(str, " ");
	int i = 0;

	/* Loop through the tokens and store them in the args array */
	while (token != NULL && i < MAX_ARGS - 1)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}

	/* Set the last element of the args array to NULL */
	args[i] = NULL;
}

/**
 * main - Entry point
 *
 * Return: Always 0, success
 */
int main(void)
{
	char input[MAX_SIZE_INPUT];
	char *args[MAX_ARGS];
	size_t len = 0;

	while (1)
	{
		/* Print the shell prompt */
		printf("$ ");

		/* Read a line of input */
		if (fgets(input, MAX_SIZE_INPUT, stdin) == NULL)
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}

		/* Remove the newline character at the end */
		len = strlen(input);
		if (len > 0 && input[len - 1] == '\n')
		{
			input[len - 1] = '\0';
		}

		/* Check if the user entered "exit" and exit the loop */
		if (strcmp(input, "exit") == 0)
		{
			printf("exit\n");
			exit(EXIT_SUCCESS);
		}

		/* Parse the input into commands and arguments */
		parse_cmd(input, args);

		exec_command(args);
	}

	return (0);
}

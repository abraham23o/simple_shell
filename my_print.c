#include "shell.h"

/**
 * my_print - function to print strings
 * @str: string to be printed
 * Return: nothing
 */
void my_print(const char *str)
{
	write(1, str, strlen(str));
}

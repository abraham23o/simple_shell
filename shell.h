#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void my_print(const char *str);
void user_prompt(void);
void read_args(char *args, size_t size);
void exec_command(const char *command);
#endif

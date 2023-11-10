#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

#define MAX_SIZE_INPUT 1024
#define MAX_ARGS 64

void parse_cmd(char *str, char **args);
void exec_command(char *argv[]);

#endif

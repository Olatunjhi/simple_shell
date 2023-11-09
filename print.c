#include "shell.h"

void print(const char *command)
{
		write(STDOUT_FILENO, command, strlen(command));
}

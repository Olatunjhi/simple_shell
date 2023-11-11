#include "shell.h"

/**
 * print - To print to stdout
 * @command: function parameter
 */
void print(const char *command)
{
		write(STDOUT_FILENO, command, strlen(command));
}

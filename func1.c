#include "shell.h"

void printUserMessage(char *shellProgram)
{
	fprintf(stderr, "Usage: %s <program_to_execute>\n", shellProgram);
}

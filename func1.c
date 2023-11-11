#include "shell.h"
/**
 * printUserMessage - To print out error message
 * @shellProgram: function parameter
 */

void printUserMessage(char *shellProgram)
{
	fprintf(stderr, "Usage: %s <program_to_execute>\n", shellProgram);
}

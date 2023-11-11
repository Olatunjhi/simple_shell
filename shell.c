#include "shell.h"

/**
 * main - Entry point
 * Description:
 * @argc: argument count
 * @argv: argument velocity
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char command[120];
	char *prompt;

	if (argc != 2)
	{
		printUserMessage(argv[0]);
		return (1);
	}

	prompt = "($)";

	while (1)
	{
		print(prompt);
		fgets(command, sizeof(command), stdin);
		exeCommand(command);
	}
	return (0);
}

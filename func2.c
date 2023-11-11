#include "shell.h"

void exeCommand(char *command)
{
	char *parsing[60];
	int i = 0;
	char *token = strtok(command, " \n");

	if (token != NULL)
	{
		while (token != NULL)
		{
			parsing[i++] = token;
			token = strtok(NULL, " \n");
		}
		parsing[i] = NULL;

		if (strcasecmp(parsing[0], "exit") == 0)
		{
			exit(0);
		}

		pid_t pid = fork();

		if (pid < 0)
		{
			perror("fork");
		}
		else if (pid == 0)
		{
			if (execve(parsing[0], parsing, NULL) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			int status;
			wait(&status);
		}
	}
}

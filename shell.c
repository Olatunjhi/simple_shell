#include "shell.h"

int main(void)
{
	char command[120];
	char *prompt;
	char *token;
	char *parsing[60];
	int i;
	pid_t pid;
	int status;

	prompt = "($)";

	while (1)
	{
		print(prompt);

		fgets(command, sizeof(command), stdin);

		i = 0;
		token = strtok(command, " \n");
		
		if (token != NULL)
		{
			while (token != NULL)
			{
				parsing[i] = token;
				token = strtok(NULL, " \n");
				i++;
			}

			parsing[i] = NULL;

			if (strcasecmp(parsing[0], "exit") == 0)
			{
				break;
			}

			pid = fork();

			if (pid < 0)
			{
				perror("fork");
			}
			else if (pid == 0)
			{
				if(execve(parsing[0], parsing, NULL) == -1)
				{
					perror("execve");
				}
			}
			else
			{
				wait(&status);
			}
		}
	}

	return (0);
}

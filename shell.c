#include "shell.h"
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printUserMessage(argv[0]);
        return 1;
    }
    char command[120];
    char *prompt = "($)";
    while (1)
    {
	    print(prompt);
	    fgets(command, sizeof(command), stdin);
	    exeCommand(command);
    }
        return 0;
}

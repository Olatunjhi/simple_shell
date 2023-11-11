#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <ctype.h>

void exeCommand(char *command);
void printUserMessage(char *shellProgram);
void print(const char *command);

#endif

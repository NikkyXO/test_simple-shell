#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int execute(char **args);
char *readline(void);
char **tokenization(char *line);
void printPrompt(void);

#endif

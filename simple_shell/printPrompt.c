#include "shell.h"

void printPrompt(void)
{
    write(1, "$ ", 3);
}
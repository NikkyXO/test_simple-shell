#include <stdio.h>
#include "shell.h"

int main()
{
    	char **tokens;
		char *line;
		

    	while (1)
    	{

        	printPrompt();

        	line = readline();
        	tokens = tokenization(line);

        	if (tokens[0] != NULL)
        	{
            		execute(tokens);
        	}
        	free(tokens);
        	free(line);
    	}
    	return (1);
}

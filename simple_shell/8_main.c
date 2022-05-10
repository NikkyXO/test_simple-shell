#include "shell.h"

int main()
{
    char *buffer;

    while (1)
    {

        printf("$ ");

        char *line = get_line(buffer);
        char **tokens = tokenization(line);

        if (tokens[0] != NULL)
        {
            execute(tokens);
        }
        free(tokens);
        free(line);
    }
    return (1);
}

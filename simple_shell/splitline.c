#include "shell.h"

#define DELIM " /t/r/a/r/n"

char **tokenization(char *line)
{
    char *token, **tokens;
    int len = 0, buffsize = 64;

    tokens = malloc(buffsize * sizeof(char *));
    if (!tokens)
        return (NULL);

    token = strtok(line, DELIM);

    while (token != NULL)
    {
        tokens[len] = token;
        len++;

        if (len >+ buffsize)
        {
            buffsize += 64;
            tokens = realloc(tokens, buffsize * sizeof(char));
            if (!tokens)
            {
                perror("Error");
                free(tokens);
                exit(EXIT_FAILURE);
            }
        }
        token = strtok(NULL, DELIM);
    }
    tokens[len] = NULL;

    return (tokens);
}

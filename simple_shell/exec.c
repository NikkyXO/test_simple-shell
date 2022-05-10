#include "shell.h"

int execute(char **args)
{
    pid_t cpid;
    int status;

    if (strcmp(args[0], "exit") == 0)
    {
        exit(0);
    }
    cpid = fork();

    if (cpid == 0)
    {
        if (execve(args[0], args, NULL) < 0)
         {
            printf("Error: Command not found\n");
            exit(EXIT_FAILURE);
         }   
    }
    else if (cpid < 0)
    {
        printf("Error Forking\n");
    }
    else
    {
        do
        {
            waitpid(cpid, &status, WUNTRACED);

        } while (!WIFEXITED(status) && !WIFSIGNALED(status));   
    }
    return (1);
}

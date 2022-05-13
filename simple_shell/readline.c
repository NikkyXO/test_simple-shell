#include <stdio.h>
#include "shell.h"


// #define BUFFER_SIZE 1024

// char *get_line(const char *line)
// {
//     char *buffer;
//     int len = 0, buffer_size = BUFFER_SIZE;
//     int c;

//     len = strlen(line);

//     buffer = malloc(BUFFER_SIZE * sizeof(char));
//     if(!buffer)
//         return (NULL);
    
//     while (1)
//     {
//         c = getchar();

//         if (c == EOF || c =='\n')
//         {
//             buffer[len] = '\0';
//             return (buffer);
//             exit(EXIT_SUCCESS);
//         }
//         else
//         {
//             buffer[len] = c;
//         }
//         len++;
        
//         if (len >= buffer_size)
//         {
//             buffer_size += BUFFER_SIZE;
//             buffer = realloc(buffer, buffer_size);
//             if (!buffer)
//             {
//                 free(buffer);
//                 perror("Error:");
//                 exit(EXIT_FAILURE);
//             }
//         }
    
//     }
// }


char *readline(void)
{
    char *line = NULL;
    ssize_t buffsize = 0;

    if (getline(&line, &buffsize,stdin) == -1)
    {
        if(feof(stdin))
        {
            exit(EXIT_SUCCESS);
        }
        else
        {
            perror("Error: Readline failed");
            exit(EXIT_FAILURE);
        }
    }
    return line;
}
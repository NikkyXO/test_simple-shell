#include <stdio.h>
#include "shell.h"


#define BUFFER_SIZE 1024

char *get_line(const char *line)
{
    char *buffer;
    int len = 0, buffer_size = BUFFER_SIZE;
    int c;

    len = strlen(line);

    buffer = malloc(BUFFER_SIZE * sizeof(char));
    if(!buffer)
        return (NULL);
    
    while (1)
    {
        c = getchar();

        if (c == EOF || c =='\n')
        {
            buffer[len] = '\0';
            return (buffer);
            exit(EXIT_SUCCESS);
        }
        else
        {
            buffer[len] = c;
        }
        len++;
        
        if (len >= buffer_size)
        {
            buffer_size += BUFFER_SIZE;
            buffer = realloc(buffer, buffer_size);
            if (!buffer)
            {
                free(buffer);
                perror("Error:");
                exit(EXIT_FAILURE);
            }
        }
    
    }
}

// OR 

// /**
//    @brief Read a line of input from stdin.
//    @return The line from stdin.
//  */
// char *lsh_read_line(void)
// {
// // #ifdef LSH_USE_STD_GETLINE
//   char *line = NULL;
//   ssize_t bufsize = 0; // have getline allocate a buffer for us
//   if (getline(&line, &bufsize, stdin) == -1)
//   {
//     if (feof(stdin))
//     {
//       exit(EXIT_SUCCESS);  // We received an EOF
//     }
//     else
//     {
//       perror("lsh: getline\n");
//       exit(EXIT_FAILURE);
//     }
//   }

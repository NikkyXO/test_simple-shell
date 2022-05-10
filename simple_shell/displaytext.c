#include "shell.h"

// C Program to design a shell in Linux 
// #include <readline/readline.h> 
// #include <readline/history.h> 

  
#define MAXCOM 1000 // max number of letters to be supported 
#define MAXLIST 100 // max number of commands to be supported 

  
// // Clearing the shell using escape sequences 
// #define clear() printf("\033[H\033[J") 

  
// // Greeting shell during startup 



void init_shell() 
{ 

    // clear(); 

    printf("\n\n\n\n******************"

        "************************"); 

    printf("\n\n\n\t****MY SHELL****"); 

    printf("\n\n\t-HOW MAY I BE OF SERVICE-"); 

    printf("\n\n\n\n*******************"

        "***********************"); 

    char* username = getenv("USER"); 

    printf("\n\n\nUSER is: @%s", username); 

    printf("\n"); 

    // sleep(1); 

    // clear(); 
} 



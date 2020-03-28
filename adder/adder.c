#include <stdio.h>



int main (int argc, char *argv[])
{
    int     numberOfArgs = argc;
    char *arg1 = argv[0];

    int a = atoi(argv[1]);  
    int b = atoi(argv[2]); 

    int total = (a+b);

    // printf("Number of Arguments: %d\n", numberOfArgs);
    // printf("The program name: %s\n", arg1);
    // printf("Argument 2 is the command line argument: %s\n", arg2);
    // printf("Arg3 is second digit: %s\n", arg3);
    printf("%i + %i = %i\n\n", a, b, total);
    
    return 0;
 
}
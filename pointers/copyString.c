#include <stdio.h>
#include <stdlib.h>


void copyString (char *to, char *from)
{
    while ( *from ) // the null character is equal to 0 so you are at the end - jump out of while. 
        *to++ = *from++;  // makes to equal to from and then adds one to the pointer

    *to = '\0'; // add null terminator at the end to make a valid string


}

int main (void)
{
    char string1[] = "A string to be copied.";
    char string2[50];  //Placeholder string array with 50 chars

    copyString (string2, string1);
    printf("%s\n", string2);

     return 0;
}
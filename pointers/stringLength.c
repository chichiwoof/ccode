#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
    printf("%d \n", stringLength("stringLength test")); // calls the function and passes a string  
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("jason"));

    return 0;
    
}

int stringLength(const char *string)  // points to the first address of the array
{
    const char *lastAddress = string;

    while (*lastAddress)  // dereferences the pointer and when it hits the null terminator it will equal 0 or be false
        ++lastAddress;

    return lastAddress - string;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';
    void *vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);





    // int num = 150;
    // int *pNum = NULL;

    // pNum = &num;

    // printf("num address is: %p\n", &num);
    // printf("Value of pNum: %p\n", &pNum);
    // printf("value of the pNum: %p\n", pNum);
    // printf("value of what pNum is pointing to %d\n", *pNum);
    
    return 0;
}
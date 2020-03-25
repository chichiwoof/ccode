#include <stdio.h>

int main(){
    char str[100];
    int i;

    printf( "Enter a number and an item:");
    scanf("%d %s", &i, str);

    printf( "\nI'll take %d %s from you\n", i, str);

    return 0;
}
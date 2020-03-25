#include <stdio.h>

int main (void)
{
    int     integerVar = 100;
    int     integerVar2 = 200;
    float   floatingVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';

    float x = 3.141590782630;

    _Bool   boolVar = 0;

    printf("integerVar = %i, and %i\n", integerVar, integerVar2);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    printf("\npi is basically %.5f\n", x);  //.5f is a float with 5 decimal spots

    return 0;
 
}
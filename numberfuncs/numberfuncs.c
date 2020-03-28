

#include <stdio.h>




float absVal(inVal)
{
    float absolute;
    if (inVal >= 0 )
    {
        absolute = inVal;
    } 
    else
    {
        absolute = (-inVal);
    }
    return absolute;
}






int main (void)
{
long double posNum = absVal(-300);

printf("%.2Lf\n", posNum); 



return 0;
}
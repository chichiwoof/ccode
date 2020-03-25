#include <stdio.h>

int main ()
{

    long mins;

    printf("How many minutes has it been?");
    scanf("%d", &mins);

    

    double minsinday = 60 * 24;
    double minsinyear = 60 * 24 * 365;

    double days = mins / minsinday;
    double years = mins / minsinyear;
    printf("\nIt's been %f days and %f years\n", days, years);

    return 0;


}
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int primes[100] = {2, 3};
    int p = 3;
    for (int x = 5; x <= 100; x = x+2)
        {
            int notprime = 0;
            for  (int i = 2; i < x; i++)
                {
                    if (x % i == 0 )
                    {
                        notprime = 1;
                    }
                   
                }
            if (notprime == 0)
            {
                primes[p] = x;
                p++;  
            }
              
        }

    

    for (int y = 0; y <=p; y++ )
        if (primes[y] != 0)
        {
            printf("%d, ", primes[y]);
        }

    
    
    return 0;
 
}
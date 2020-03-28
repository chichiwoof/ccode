#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void){
    
    int i;
    srand(time(0));  // chooses random seed based on time (seconds) 
    int numb = (rand() % 20) + 1;

    // printf("%d", numb);   // this function prints the chosen number, hide to hide from user.
    printf( "\nI'm thinking of a number between 0 and 20... \nGuess my number in 5 tries. \nEnter a number: ");
    scanf("%d", &i);

    for (int x = 1; x < 5; x++)
    {
        
        if (i != numb)
        {
            if (i > numb)
            {
                printf("\nYou're too high, guess again: ");
                scanf("%d", &i);
            }
            else 
            { 
                printf("\nYou're too low, guess again: ");
                scanf("%d", &i);
            }        
        }
        else 
        {
            printf("\n\nCongrats, it was %d, you guessed it! \n\n\n", numb);
            break;
        }
    }
   
    if (i != numb) printf("\nOopsie daisy, too many guesses, I guess you'll never know MY secret number...\n\n");

    return 0;
}
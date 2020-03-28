#include <stdio.h>

char xArray[9] = {"123456789"};
// char oArray[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
_Bool xWon = 0;
_Bool oWon = 0;
void redraw(char xArray[])
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(" _____ _____ _____");
    for (int x = 0; x < 9; x = x + 3)
    {
        
        printf("\n|     |     |     |\n");
        printf("|  %c  |", xArray[x]);
        printf("  %c  |", xArray[x + 1]);
        printf("  %c  |\n", xArray[x + 2]);
        printf("|_____|_____|_____|");
    }
}

void xTurn(void)
{
    if ((xWon != 1) && (oWon != 1))
    {
        int valid = 0;
        printf("\n\n\nX's turn, choose a number: ");
        while (valid == 0)
        {
            int i;
            scanf("%d", &i);
            if (((xArray[(i - 1)] != 'X') && (xArray[(i - 1)] != 'O')) && (i > 0) && (i < 10))
            {
                xArray[(i - 1)] = 'X';
                valid = 1;
            }
            else
                printf("Invalid Move, try again:");
        }
    }
}
void oTurn(void)
{
    if ((xWon != 1) && (oWon != 1))
    {
        int valid = 0;
        printf("\n\n\nO's turn, choose a number: ");
        while (valid == 0)
        {
            int i;
            scanf("%d", &i);
            if (((xArray[(i - 1)] != 'X') && (xArray[(i - 1)] != 'O')) && (i > 0) && (i < 10))
            {
                xArray[(i - 1)] = 'O';
                valid = 1;
            }
            else
                printf("Invalid Move, try again:");
        }
    }
}

void checkWins(void)
{
    int win[8][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9},
        {1, 5, 9},
        {3, 5, 7}
    };


    for (int y = 0; y < 8; y++)
    {

    //    printf("%c", xArray[y]);

        if ((xArray[(win[y][0]-1)] == 'X') &&(xArray[(win[y][1]-1)] == 'X') && (xArray[(win[y][2]-1)] == 'X'))
            {
                xWon = 1;
            }
        else if ((xArray[(win[y][0]-1)] == 'O')&&(xArray[(win[y][1]-1)] == 'O') && (xArray[(win[y][2]-1)] == 'O'))
            {
                oWon = 1;
            }
    }
}

int main(void)
{
    while ((xWon != 1) && (oWon != 1))
    {
        redraw(xArray);
        xTurn();
        checkWins();
        redraw(xArray);
        oTurn();
        checkWins();
    }

    if (xWon == 1)
        printf("\n\n\n\n\n\n\n\nX WINS THE GAME!!!\n\n\n\n\n\n\n");

    else if (oWon == 1)
        printf("\n\n\n\n\n\n\n\nO WINS THE GAME!!!\n\n\n\n\n\n\n");
    return 0;
}

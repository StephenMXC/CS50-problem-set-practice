#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int change = get_int("Change owed: ");
    int coins = 0;
    while (change != 0) 
    {
        if (change >= 25)
        {
            change = change -25;
            coins++;

        }

        else if (change >= 10)
        {
            change = change -10;
            coins++;
        }
        else if (change >=5)
        {
            change = change - 5;
            coins++;
        }
        else if (change >=1)
        {
            change = change - 1;
            coins++;
        }
    }
    printf("You are owed: %i\n", coins);
}
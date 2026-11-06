#include "cs50.h"
#include <stdio.h>

// requirements:
// prompt user for int. 
// based on the number, draw a pyramid. 
// if the int is not 0 and not negative, not also a non-int.

int main(void) {
    int number = get_int("Height: ");

    if (number == 0) {
        printf("Invalid Number. Value must be larger than 0 strictly.");
        return 1;
    }
    else if (number < 0)
    {
        printf("Invalid number. Value must not be negative.");
    }

    for(int i=0; i < number; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
    
    

}
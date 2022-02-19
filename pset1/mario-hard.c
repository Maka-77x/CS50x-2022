
#include <stdio.h>
#include <cs50.h>

int getnumber();
int main(void)
{
    int height = 0;
    height = getnumber();
    
    while (!((height <= 8) && (height >=1)))
    {
        printf("That is not a valid operation.\n");
        height = getnumber();
    }

    // loop to print decreasing amount of spaces relative to height of pyramid from top to bottom
    for (int i = 1; i <= height; i++)
    {
        // hash count will go from 1 per line
        int hashCount = (i * 1);

        // hash count starts off at the center of pyramid and entends outwards 
        // and from there decreases as i increases in order as we have more hashes
        // to print per line
        int spaceCount = height - i;
        
        // print out the spaces
        for (int j = 0; j < spaceCount; j++)
        printf(" ");
        
        // print out the stars
        for (int j = 0; j < hashCount; j++)
        printf("#");
        printf("  ");
        for (int j = 0; j < hashCount; j++)
        printf("#");
        
        // print out a new line so the next line of stars starts on a new line
        printf("\n");
    }
  return 0;
}

//this function returns the number given by user
int getnumber() {    
    int number;
    //asks user for a input in given range printf(" Enter a number between 1 to 8 ");
    printf("Height: ");
    scanf("%d", &number);
    return (number);
}

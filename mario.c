#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, space, hash;
    //Input height from user
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Printing blocks
    //Columns
    for (int i = 1; i <= height; i++)
    {
        //row spaces
        for (space = 1; space <= height - i; space++)
        {
            printf(" ");
        }
        //row hashes
        for (int j = 0; j < 2; j++)
        {
            //printing hashes
            for (hash = height; hash > height - i; hash--)
            {
                printf("#");
            }
            //double space in between
            if (j == 0)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
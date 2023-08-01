#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int h = get_int("height: ");

   for (int i = (h - 1); i >= 0; i--)
   {
    for (int j = 0; j < h; j++)
    {
        if (j >= i)
        printf ("#");
        else
        printf(" ");
    }
    printf("\n");
   }
}
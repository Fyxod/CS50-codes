#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("height: ");
    }
    while (h > 8 || h < 1);

    for (int i = (h - 1); i >= 0; i--)
    {
        for (int j = 0; j < h; j++)
        {
            if (j >= i)
                printf("#");
            else
                printf(" ");
        }
        printf(" ");
        for (int y = (h-1); y >= i; --y)
            {
                printf("#");
            }
        printf("\n");
    }
}
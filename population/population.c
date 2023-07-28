#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end;
    // TODO: Prompt for start size
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int count = 0;
    for (int i = start; i < end; count++)
    {
        i = i + (i / 3) - (i / 4);
    }

    // TODO: Print number of years
    printf("Years: %d\n", count);
}
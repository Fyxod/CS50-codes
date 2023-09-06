#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc != 1)
    {
        printf("Enter something good");
        return 1;
    }
    else
    {
        char c = (char)argv[1];
        int d = (int)c;
        printf("%i", c);
    }
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string str = get_string("Message: ");
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        char c = str[i];
        int v = (int) c;
        int b = bin(v);
        int len = intlen(b);
        int left = BITS_IN_BYTE - len;
        for(int i = 0; i < left; i++)
        {
            print_bulb(0);

            for(int i = len-1; i >= 0; i--)
            {
                int bit = b / (pow (10,i));
                print_bulb(bit);
                b = b % pow (10,i);
            }
            printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int intlen(int a)
{
    int count = 0;
    for(int i = a; i>0; i/=10)
    {
        count++;
    }
    return count;
}

int bin(int a)
{
    
}
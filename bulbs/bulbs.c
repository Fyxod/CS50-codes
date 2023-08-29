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

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
const int BITS_IN_BYTE = 8;

int intlen(int a);
int bin(int a);
void print_bulb(int bit);

int main(void)
{
    string str = get_string("Message: ");
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        char c = str[i];
        int v = (int) c;
        printf("%i", v);
        int b = bin(v);
        int leng = intlen(b);
        int left = BITS_IN_BYTE - leng;
        for(int y = 0; y < left; y++)
        {
            print_bulb(0);

            for(int j = leng-1; j >= 0; j--)
            {
                int bit = b / (pow (10,j));
                print_bulb(bit);
                b = b % (int)pow (10,j);
            }
            printf("\n");
    }
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
    int f = 1;
    int place = 1;
    for(int i = a; i > 0; i/=2)
    {
        f = f + ((i % 2) * place);
        place *= 10;
    }
    return f;
}

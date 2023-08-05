#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");
    }
    while (n<0);
    int count = 0;
    for(i = n; n > 0; n/=10)
    {
        int temp = n % 10;
        if(count%2 != 0)
        {
            temp*=2;
        }
        
    }
}
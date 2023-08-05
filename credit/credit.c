#include <cs50.h>
#include <stdio.h>

int SumOfDigits(int h);
int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");
    }
    while (n<0);
    int count = 0;
    int sum = 0;
        for(int i = n; n > 0; n/=10)
    {
        int temp = n % 10;
        if(count%2 != 0)
        {
            temp*=2;
        }
        int temp2 = SumOfDigits(temp);
        sum= sum + temp2;
        count++;
    }

    if(sum%10==0)
    {
        printf("Visa\n");
    }
    else
    {
        printf("invalid\n");
    }
}

int SumOfDigits(int h)
{
    int sum = 0;
    for(int i = h; i>0; i/=10)
    {
        int temp = i%10;
        sum+=temp;
    }
    return sum;
}
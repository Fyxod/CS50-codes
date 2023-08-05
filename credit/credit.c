#include <cs50.h>
#include <math.h>
#include <stdio.h>

int SumOfDigits(int h);
int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");
    }
    while (n < 0);
    int count = 0;
    int sum = 0;
    for (long i = n; i > 0; i /= 10)
    {
        int temp = i % 10;
        if (count % 2 != 0)
        {
            temp *= 2;
        }
        int temp2 = SumOfDigits(temp);
        sum = sum + temp2;
        count++;
    }
    if (sum % 10 == 0 && (int) (n / pow(10, (count - 1))) == 4 && (count == 13 || count == 16))
    {
        printf("VISA\n");
    }
    else

        if (sum % 10 == 0 && ((int) (n / pow(10, (count - 2))) == 34 || (int) (n / pow(10, (count - 2))) == 37) && count == 15)
    {
        printf("AMEX\n");
    }

    else

        if (sum % 10 == 0 && ((int) (n / pow(10, (count - 2))) <= 55 && (int) (n / pow(10, (count - 2))) > 50) && count == 16)
    {
        printf("MASTERCARD\n");
    }

    else
    {
        printf("INVALID\n");
    }
}

int SumOfDigits(int h)
{
    int sum = 0;
    for (int i = h; i > 0; i /= 10)
    {
        int temp = i % 10;
        sum += temp;
    }
    return sum;
}
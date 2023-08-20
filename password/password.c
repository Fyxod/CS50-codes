// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int numcheck = 0, capcheck = 0, lowcheck = 0, specialcheck = 0;
    int len = strlen(password);
    for (int i = 0; i < len; i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            numcheck++;
        }
        if (isupper(password[i]))
        {
            capcheck++;
        }
        if (password[i] == '$' || password[i] == '!' || password[i] == '#')
        {
            specialcheck++;
        }
        if (islower(password[i]))
        {
            lowcheck++;
        }
    }
    printf("%i %i %i %i/n", specialcheck, numcheck, capcheck, lowcheck);
    if (specialcheck > 0 && numcheck > 0 && capcheck > 0 && lowcheck > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

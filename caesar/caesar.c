#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string new;
    if(argc != 1)
    {
        printf("Enter something good");
        return 1;
    }
    else
    {
        if(iskey(argv[1]))
        {
            new = change((get_string("Plaintext:  "), atoi(argv[1])));
            printf("ciphertext: %s", new);
        }
        else
        {
            printf("Usage: ./caesar key");
        }
    }
}

bool iskey(string key)
{
    int len = strlen(key);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(!(key[i] >= '0' && key[i] <= '9'))
        {
            count++;
        }
    }
    if(count > 0)
    {
        return 0;
    }
    else if(atoi(key) >= 0)
    {
        return 1;
    }
}

string change(string str, key)
{
    int len = strlen(str)
    for(int i = 0; i < len; i++)
    {
        if(str)
    }
}
#include <cs50.h>
#include <stdio.h>

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
            new = change(get_string("Plaintext:  "));
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
    int k = atoi(key);
    
}
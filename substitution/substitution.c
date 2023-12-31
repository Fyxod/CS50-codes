#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string change(string old, string key);
bool keycheck(string key);

int main(int argc, string argv[])
{
    string new;
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else
    {
        if (keycheck(argv[1]))
        {
            new = change(get_string("plaintext:  "), argv[1]);
            printf("ciphertext: %s\n", new);
        }
        else
        {
            return 1;
        }
    }
}

string change(string old, string key)
{
    int len = strlen(old);
    for (int i = 0; i < len; i++)
    {
        if (old[i] <= 'z' && old[i] >= 'a')
        {
            int temp = (int) old[i] - 97;
            old[i] = tolower(key[temp]);
        }
        if (old[i] <= 'Z' && old[i] >= 'A')
        {
            int temp = (int) old[i] - 65;
            old[i] = toupper(key[temp]);
        }
    }
    return old;
}

bool keycheck(string key)
{
    int len = strlen(key);
    if (len != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (!((key[i] <= 'z' && key[i] >= 'a') || (key[i] <= 'Z' && key[i] >= 'A')))
            {
                printf("Usage: ./substitution key\n");
                return 0;
            }
            int c = 0;
            for (int j = 0; j < len; j++)
            {
                if (tolower(key[j]) == tolower(key[i]))
                {
                    c++;
                }
            }
            if (c > 1)
            {
                return 0;
            }
        }
        return 1;
    }
}
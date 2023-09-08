#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool iskey(string key);
string changex(string str, int key);

int main(int argc, string argv[])
{
    string new;
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        if (iskey(argv[1]))
        {
            new = changex((get_string("Plaintext:  ")), atoi(argv[1]));
            printf("ciphertext: %s\n", new);
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
}

bool iskey(string key)
{
    int len = strlen(key);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (!(key[i] >= '0' && key[i] <= '9'))
        {
            count++;
        }
    }
    if (count > 0)
    {
        return 0;
    }
    else if (atoi(key) >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string changex(string str, int key)
{
    int len = strlen(str);
    if (key > 26)
    {
        key = key % 26;
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if ((str[i] + key) > 'z')
            {
                int keytemp = key;
                keytemp = keytemp - ('z' - str[i]);
                str[i] = 'a' + (keytemp - 1);
            }
            else
            {
                str[i] += key;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if ((str[i] + key) > 'Z')
            {
                int keytemp = key;
                keytemp = keytemp - ('Z' - str[i]);
                str[i] = 'A' + (keytemp - 1);
            }
            else
            {
                str[i] += key;
            }
        }
    }
    return str;
}
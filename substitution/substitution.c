#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    string new;
    if(argc!=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else
    {
        if(keycheck(argv[1]))
        {
            new = change(get_string("plaintext:  \n"), argv[1]);
            printf("Ciphertext: %s\n", new);
        }
        else
        {
            return 1;
        }

}

string change(string old, string key)
{
    int len = strlen(old);
    for(int i = 0; i < len; i++)
    {
        if(old[i] <='z' && old[i] >= 'a')
        {
            int temp = (int)old[i] - 97
            old[i] = tolower(key[temp]);
        }

    }
}
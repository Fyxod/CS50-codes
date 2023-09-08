#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    string new;
    if(argc!=2)
    {
        printf("Usage: ./substitution key");
        return 1
    }
    else
    {
        if(keycheck(argv[1]))
        {
            new = change(get_string("plaintext:  "), argv[1])
        }
        else
        {
            return 1
        }

}
// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string t);

int main(int argc, string argv[])
{
    if (argc == 2)
    {

        string new = replace(argv[1]);
        printf("%s\n", new);
        return 0;
    }
    else
    {
        printf("You didn't type anything after exe");
        return 1;
    }
}
string replace(string t)
{
    string ret = "";
    int len = strlen(t);
    for (int i = 0; i < len; i++)
    {
        switch (t[i])
        {
            case 'a':
                t[i] = '6';
                break;
            case 'e':
                t[i] = '3';
                break;
            case 'i':
                t[i] = '1';
                break;
            case 'o':
                t[i] = '0';
                break;
        }
    }
    return t;
}

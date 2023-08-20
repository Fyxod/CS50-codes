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
    if(argc == 2)
    {

        string new = replace(argv[1]);
        printf("%s", new);
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
    for(int i = 0; i < len; i++)
    {
        switch(t[i])
        {
            case 'a':
                t[i]= '6';
                break;
            case 'e':
                ret = ret + "3";
                break;
            case "i":
                ret = ret + "1";
                break;
            case "o";
                ret = ret + "0";
                break;
            default:
                ret = ret + t[i];
        }

    }
    return ret;
}
}

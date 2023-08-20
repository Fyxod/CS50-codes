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
    }
    else
    {
        printf("You didn't type anything after exe");
        return 1;
    }
}
string replace(string t)
{
    for()
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters(string s);
int count_words(string s);
int count_sent(string s);

int main(void)
{
    string str = get_string("Text: ");
    int letters = count_letters(str);
    int words = count_words(str);
    int sentences = count_sent(str);
    double L = (letters/words) * 100;
    double S = (sentences/words) * 100;
    double index = 0.0588 * L - 0.296 * S - 15.8;
    int abs = (int)index;
    int level;
    if ((index-abs) < 0.5)
    {
        level = abs;
    }
    else
    {
        level = abs + 1;
    }

    printf("Grade %i %lf %lf %lf \n", level, index, L, S);
}

int count_letters(string s)
{
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
        {
            count++;
        }
    }
    return count;
}

int count_words(string s)
{
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len-1; i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
        {
            count++;
        }
    }
    return count+1;
}

int count_sent(string s)
{
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len-1; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            count++;
        }
    }
    return count;
}
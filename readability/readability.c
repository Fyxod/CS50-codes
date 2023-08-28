#include <cs50.h>
#include <stdio.h>

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
    if((index-abs) < 0.5)
    {
        
    }
}
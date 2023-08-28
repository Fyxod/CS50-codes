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
    
}
#include <stdio.h>
int main()
{
    int dl;
    printf("Enter the number of days you are late : ");
    scanf("%d",&dl);
    if(dl<=5)
    {
        printf("Your fine if of 5 paisa");
    }
    else if(dl>5 && dl<=10)
    {
        printf("Your fine if of 1 rupee");
    }
    else if(dl>10 && dl<=30)
    {
        printf("Your fine if of 5 rupee");
    }
    else if(dl>30)
    {
        printf("Your membership has been cancelled");
    }
    return 0;
}
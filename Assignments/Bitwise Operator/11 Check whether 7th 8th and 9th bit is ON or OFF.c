#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    if((No >> 6) & 1)
    {
        if((No >> 7) & 1)
        {
            if((No >> 8) & 1)
            {
                printf("\n 7th, 8th and 9th bit of given number %d is ON.", No);
            }
            else
            {
                printf("\n 7th, 8th and 9th bit of given number %d is OFF.", No);
            }
        }
        else
        {
            printf("\n 8th bit of given number %d is OFF, 7th and 9th bit is ON.", No);
        }
    }
    else
    {
        printf("\n 7th bit of given number %d is OFF, 8th and 9th bit is ON.", No);
    }

    getch();
    return 0;
}


#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    if((No >> 6) & 1)
    {
        if((No >> 14) & 1)
        {
            if((No >> 20) & 1)
            {
                if((No >> 27) & 1)
                {
                    printf("\n 7th, 15th, 21st and 28th bit of given number %d is ON.", No);
                }
                else
                {
                    printf("\n 7th, 15th, 21st and 28th bit of given number %d is OFF.", No);
                }
            }
            else
            {
                printf("\n 21st bit of given number %d is OFF, 7th and 15th and 28th bit is ON.", No);
            }
        }
        else
        {
            printf("\n 15th bit of given number %d is OFF, 7th and 21st and 28th bit is ON.", No);
        }
    }
    else
    {
        printf("\n 7th bit of given number %d is OFF, 15th and 21st and 28th bit is ON.", No);
    }

    getch();
    return 0;
}


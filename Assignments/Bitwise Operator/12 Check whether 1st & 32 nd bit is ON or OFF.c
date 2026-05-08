#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    if((No & 1) && ((No >> 31) & 1))
    {
        printf("\n The 1st and 32nd bit of given number %d is ON", No);
    }
    else if(No & 1)
    {
        printf("\n The 1st bit of given number %d is ON", No);
    }
    else if((No >> 31) & 1)
    {
        printf("\n The 32nd bit of given number %d is ON", No);
    }
    else
    {
        printf("\n The 1st and 32nd bit of given number %d is OFF", No);
    }

    getch();
    return 0;
}

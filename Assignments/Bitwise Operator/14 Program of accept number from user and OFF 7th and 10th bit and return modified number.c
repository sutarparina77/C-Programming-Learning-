#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    if((1 << 6) & No)
    {
        No = No & ~(1 << 6);
    }

    if((No >> 9) & 1)
    {
        No = No & ~(1 << 9);
    }

    printf("\n Modified number of given number : %d", No);

    getch();
    return 0;
}

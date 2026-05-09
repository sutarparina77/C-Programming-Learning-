#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Even_dSum = 0, Odd_dSum = 0, Dig = 0, Temp = 0, Diff = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        if(Temp %2 == 0)
        {
             Dig = Temp % 10;
             Even_dSum = Even_dSum + Dig;
             Temp = Temp / 10;
        }
        else
        {
            Dig = Temp % 10;
            Odd_dSum = Odd_dSum + Dig;
            Temp = Temp / 10;
        }
    }

    Diff = Even_dSum - Odd_dSum;

    printf("\n Difference between Even digit sum and odd digit sum : %d", Diff);

    getch();
    return 0;
}

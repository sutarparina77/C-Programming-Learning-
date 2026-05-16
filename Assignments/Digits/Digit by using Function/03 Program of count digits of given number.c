#include<stdio.h>
#include<conio.h>

int Digit_Count(int);

int main()
{
    int No = 0, D_Cnt = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    D_Cnt = Digit_Count(No);

    printf("\n digit Count of given number %d : %d", No, D_Cnt);

    getch();
    return 0;
}
int Digit_Count(int Num)
{
    int Dig = 0, Cnt = 0;

    while(Num != 0)
    {
         Dig = Num % 10;
         Cnt++;
         Num = Num / 10;
    }

    return Cnt;
}


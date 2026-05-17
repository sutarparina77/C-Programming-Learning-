#include<stdio.h>
#include<conio.h>

int Odd_Digit_Count(int);
int main()
{
    int No = 0, Odd_D_Cnt = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Odd_D_Cnt = Odd_Digit_Count(No);

    printf("\n Odd digit Count of given number %d : %d", No, Odd_D_Cnt);

    getch();
    return 0;
}
int Odd_Digit_Count(int Num)
{
    int Dig = 0, Cnt = 0;

    while(Num != 0)
    {
         Dig = Num % 10;
         if(Num %2 == 1)
         {
             Cnt++;
         }
         Num = Num / 10;
    }

    return Cnt;
}


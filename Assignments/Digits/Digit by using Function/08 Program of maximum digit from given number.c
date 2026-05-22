#include<stdio.h>
#include<conio.h>

int Max_Digit(int);

int main()
{
    int No = 0, Max_dig = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Max_dig = Max_Digit(No);

    printf("\n Maximum digit from given number %d : %d", No, Max_dig);

    getch();
    return 0;
}
int Max_Digit(int Num)
{
    short int Dig = 0, Max = 0;

    while(Num != 0)
    {
         Dig = Num % 10;

         if(Dig > Max)
         {
             Max = Dig;
         }
         Num = Num / 10;
    }

    return Max;
}


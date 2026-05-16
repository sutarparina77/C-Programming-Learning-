#include<stdio.h>
#include<conio.h>

int Digit_Sum(int);

int main()
{
    int No = 0, D_Sum = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    D_Sum = Digit_Sum(No);

    printf("\n sum of digit in given number %d : %d", No, D_Sum);

    getch();
    return 0;
}
int Digit_Sum(int Num)
{
    int Dig = 0, Sum = 0;

    while(Num != 0)
    {
         Sum = Sum + Num % 10;
         Num = Num / 10;
    }

    return Sum;
}


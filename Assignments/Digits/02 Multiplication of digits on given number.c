#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, D_Mul = 1, Dig = 0, Temp = 0;

    printf("\n Enter a number:");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp %10;
        D_Mul *= Dig;
        Temp /= 10;
    }
    printf("\n Multiplication of digits of given number %d = %d", No, D_Mul);

    getch();
    return 0;
}

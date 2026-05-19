#include<stdio.h>
#include<conio.h>

long long int Digit_Mul(long long int);
int main()
{
    long long int No = 0;
    int D_Mul = 0;

    printf("\n Enter the Number :");
    scanf("%lld",&No);

    D_Mul = Digit_Mul(No);

    printf("\n Multiplication of digit in given number %lld : %d", No, D_Mul);

    getch();
    return 0;
}
long long int Digit_Mul(long long int Num)
{
    int Mul = 1;

    while(Num != 0)
    {
         Mul = Mul * (Num % 10);
         Num = Num / 10;
    }

    return Mul;
}


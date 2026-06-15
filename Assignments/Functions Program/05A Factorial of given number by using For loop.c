#include<stdio.h>
#include<conio.h>

long int Factorial_Num(int);
int main()
{
    int No = 0;
    long int Res = 0;

    printf("\n Enter any positive integer: ");
    scanf("%d",&No);

    Res = Factorial_Num(No);

    printf("\n Factorial of %d is : %ld", No, Res);

    getch();
    return 0;
}

long int Factorial_Num(int Num)
{
    int Temp = 0;
    long int Fact = 0;

    if(Num <= 0)
    {
        printf("\n Invalid Number. ");
        return -1;
    }

    for(Fact = 1, Temp = Num; Temp > 1; Temp--)
    {
        Fact = Fact * Temp;
    }

    return Fact;
}

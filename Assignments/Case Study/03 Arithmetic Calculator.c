#include<stdio.h>
#include<conio.h>

int main()
{
    char Oper = '\0';
    float No1 = 0, No2 = 0, Res = 0;

    printf("\n\t Arithmetic Calculator \n");

    printf("\n Enter an operator (+, -, *, /, %) : ");
    Oper = getche();

    if(Oper != '+' && Oper != '-' && Oper != '*' && Oper != '/' && Oper != '%')
    {
        printf("\n Please Enter Valid Operator!!! ");
        return -1;
    }

    printf("\n\n Enter 1st Number : ");
    scanf("%f",&No1);

    printf("\n Enter 2nd Number : ");
    scanf("%f",&No2);

    if(Oper == '+')
    {
        Res = No1 + No2;
        printf("\n Addition of %.2f and %.2f = %.2f.", No1, No2, Res);
    }
    else if(Oper == '-')
    {
        Res = No1 - No2;
        printf("\n Subtraction of %.2f and %.2f = %.2f", No1, No2, Res);
    }
    else if(Oper == '*')
    {
        Res = No1 * No2;
        printf("\n Multipication of %.2f and %.2f = %.2f", No1, No2, Res);
    }
    else if(Oper == '/')
    {
        Res = No1 / No2;
        printf("\n Division of %.2f and %.2f = %.2f", No1, No2, Res);
    }
    else if(Oper == '%')
    {
        int N1 = (int)No1;
        int N2 = (int)No2;
        int Res = N1 % N2;
        printf("\n Remainder from %d and %d = %d", N1, N2, Res);
    }

    printf("\n\n THANKS!!!");

    getch();
    return 0;
}

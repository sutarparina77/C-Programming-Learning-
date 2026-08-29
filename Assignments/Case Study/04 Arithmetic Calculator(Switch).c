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

    switch(Oper)
    {
        case '+' :
            Res = No1 + No2;
            printf("\n Addition : %.2f + %.2f = %.2f.", No1, No2, Res);
            break;

        case '-' :
            Res = No1 - No2;
            printf("\n Substraction : %.2f - %.2f = %.2f", No1, No2, Res);
            break;

        case '*' :
            Res = No1 * No2;
            printf("\n Multiplication : %.2f * %.2f = %.2f", No1, No2, Res);
            break;

        case '/' :
            Res = No1 / No2;
            printf("\n Division : %.2f / %.2f = %.2f", No1, No2, Res);
            break;

        case '%':
            Res = (int)No1 % (int)No2;
            printf("\n Remainder : %.2f %% %.2f = %.2f", No1, No2, Res);
            break;
    }

    printf("\n\n THANKS!!!");

    getch();
    return 0;
}

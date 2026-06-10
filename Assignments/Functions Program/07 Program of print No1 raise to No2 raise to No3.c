#include<stdio.h>
#include<conio.h>

int Double_Power(int, int);

int main()
{
    int No1 = 0, No2 = 0, No3 = 0, Pow = 0, Dbl_Pow = 0;

    printf("\n Enter 1st number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd number :");
    scanf("%d",&No2);

    printf("\n Enter 3rd number :");
    scanf("%d",&No3);

    Pow = Double_Power(No1, No2);
    Dbl_Pow = Double_Power(Pow, No3);

    printf("\n Result of ((%d ^ %d) ^ %d) is = %d.", No1, No2, No3, Dbl_Pow);

    getch();
    return 0;
}
int Double_Power(int Base, int Exp)
{
    int Res = 1, i = 0;

    for(i = 1; i <= Exp; i++)
    {
        Res = Res * Base;
    }

    return Res;
}


#include<stdio.h>
#include<conio.h>

int Max_10_Num(int);
int main()
{
    int No = 0, Res = 0;

    printf("\n Enter 10 Numbers ==> \n");

    Res = Max_10_Num(No);

    printf("\n Maximum from 10 numbers is = %d", Res);

    getch();
    return 0;
}
int Max_10_Num(int Num)
{
    int Cnt = 0, Max_No = 0;

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n Enter a Number %d :", Cnt);
        scanf("%d",&Num);

        if((Cnt == 0) || (Num > Max_No))
        {
            Max_No = Num;
        }
    }

    return Max_No;
}

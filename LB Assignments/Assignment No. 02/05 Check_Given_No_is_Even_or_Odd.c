#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int No);

int main()
{
    int Val = 0;
    BOOL Ret = FALSE;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    Ret = ChkEven(Val);

    getch();
    return 0;
}

BOOL ChkEven(int No)
{
    if(No % 2 == 0)
    {
        printf("\n Given %d Number is Even.", No);

        return TRUE;
    }
    else
    {
        printf("\n Given %d Number is Odd.", No);

        return FALSE;
    }
}

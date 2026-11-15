#include<stdio.h>
#include<conio.h>
void PrintEven(int No);

int main()
{
    int Val = 0;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    PrintEven(Val);

    getch();
    return 0;
}

void PrintEven(int No)
{
    int Cnt = 0;

    if(No <= 0)
    {
        return;
    }

    for(Cnt = 1; Cnt <= No; Cnt++)
    {
        printf("%d\t", Cnt * 2);
    }
}

#include<stdio.h>
#include<conio.h>
void Display(int No, int Freq);

int main()
{
    int Val = 0, Cnt = 0;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    printf("\n Enter Frequency:");
    scanf("%d",&Cnt);

    Display(Val, Cnt);

    getch();
    return 0;
}

void Display(int No, int Freq)
{
    int i = 0;

    for(i = 0; i < Freq; i++)
    {
        printf(" %d ", No);
    }
}

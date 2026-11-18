#include<stdio.h>
#include<conio.h>
void DisplayConvert(char Val);

int main()
{
    char Val = 0;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    DisplayFactor(Val);

    getch();
    return 0;
}

void DisplayFactor(int No)
{
    int i = 0;

    if(No <= 0)
    {
        No = -No;
    }

    for(i = 1; i <= No; i++)
    {
        if((No % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

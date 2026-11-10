#include<stdio.h>
#include<conio.h>
void Display(int No);

int main()
{
    int Val = 0;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    Display(Val);

    return 0;
}

void Display(int No)
{
    while(No > 0)
    {
        printf(" * ");
        No--;
    }
}

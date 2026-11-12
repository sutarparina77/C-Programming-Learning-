#include<stdio.h>
#include<conio.h>
void Display(int No);

int main()
{
    int Val = 0;

    printf("\n Enter a number:");
    scanf("%d",&Val);

    Display(Val);

    getch();
    return 0;
}

void Display(int No)
{
    if(No < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

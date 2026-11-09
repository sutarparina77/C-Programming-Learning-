#include<stdio.h>
#include<conio.h>
void Display(int No);

int main()
{
    int Val = 0;

    printf("\n Enter a number:\n");
    scanf("%d",&Val);

    Display(Val);

    return 0;
}

void Display(int No)
{
    int Cnt = 0;

    while(Cnt < No)
    {
        printf(" * ");
        Cnt++;
    }
}

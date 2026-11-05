#include<stdio.h>
#include<conio.h>

void Accept(int No);

int main()
{
    int Val = 5;

    Accept(Val);

    getch();
    return 0;
}
void Accept(int No)
{
    int Cnt = 0;

    for(Cnt = 1; Cnt <= No; Cnt++)
    {
        printf(" * ");
    }
}

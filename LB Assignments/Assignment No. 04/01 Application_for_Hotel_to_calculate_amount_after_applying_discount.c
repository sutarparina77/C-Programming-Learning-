#include<stdio.h>
#include<conio.h>

float CalcBill(int Amount);

int main()
{
    int Amount = 0;
    float Res = 0;

    printf("\n Enter total bill amount :");
    scanf("%d",&Amount);

    Res = CalcBill(Amount);

    printf("Final bill Amount: %.2f", Res);

    getch();
    return 0;
}

float CalcBill(int Amount)
{
    float Discount = 0, FinalAmnt = 0;

    if(Amount <= 500)
    {
        Discount = 0;
    }
    else if(Amount <= 1500)
    {
        Discount = 10;
    }
    else
    {
        Discount = 15;
    }

    FinalAmnt = Amount - (Amount * Discount / 100);

    return FinalAmnt;
}

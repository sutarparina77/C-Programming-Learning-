#include<stdio.h>
#include<conio.h>

float IncomeTax(int Amount);

int main()
{
    int Amount = 0;
    float Res = 0;

    printf("\n Enter total bill amount :");
    scanf("%d",&Amount);

    Res = IncomeTax(Amount);

    printf("Final tax Amount: %.2f", Res);

    getch();
    return 0;
}

float IncomeTax(int Amount)
{
    float IncTax = 0, TaxAmnt = 0;

    if(Amount <= 500000)
    {
        IncTax = 0;
    }
    else if(Amount <= 1000000)
    {
        IncTax = 10;
    }
    else if(Amount <= 2000000)
    {
        IncTax = 20;
    }
    else
    {
        IncTax = 30;
    }

    TaxAmnt = Amount - (Amount * IncTax / 100);

    return TaxAmnt;
}

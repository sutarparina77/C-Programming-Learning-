#include<stdio.h>
#include<conio.h>
long long int Digit_Count(long long int);
long long int Digit_Sum(long long int);

int main()
{
    int D_Cnt = 0, D_Sum = 0;
    long long int No = 0;

    printf("\n Enter the 10 digit mobile Number :");
    scanf("%lld",&No);

    D_Cnt = Digit_Count(No);

    if(D_Sum %2 == 0)
    {
        printf("\n Upcoming year is bright.");
    }
    else
    {
        printf("\n Take care in this year.");
    }

    getch();
    return 0;
}
long long int Digit_Count(long long int Num)
{
    int Cnt = 0;

    while(Num != 0)
    {
        Cnt++;
        Num = Num / 10;
    }

    return Cnt;
}

long long int Digit_Sum(long long int Num)
{
    int Sum = 0, D_Cnt = 0;

    if(D_Cnt == 10)
    {
        while(Num != 0)
        {
            Sum = Sum + Num % 10;;
            Num = Num / 10;
        }
    }
    else
    {
        printf("\n Invalid Number.");
    }

    return Sum;
}


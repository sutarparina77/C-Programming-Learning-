#include<stdio.h>
#include<conio.h>
int main()
{
    int D_Cnt = 0, D_Sum = 0;
    long long int No = 0, Temp = 0;

    printf("\n Enter the 10 digit mobile Number :");
    scanf("%lld",&No);

    Temp = No;

    while(Temp != 0)
    {
        D_Cnt++;
        Temp = Temp / 10;
    }
    if(D_Cnt == 10)
    {
        Temp = No;

        while(Temp != 0)
        {
            D_Sum = D_Sum + Temp % 10;;
            Temp = Temp / 10;
        }

        if(D_Sum %2 == 0)
        {
            printf("\n Upcoming year is bright.");
        }
        else
        {
            printf("\n Take care in this year.");
        }
    }
    else
    {
        printf("\n Invalid Number.");
    }

    getch();
    return 0;
}


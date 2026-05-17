#include<stdio.h>
#include<conio.h>

long long int Zero_Dig_Cnt(long long int);
int main()
{
    short int Z_Cnt = 0;
    long long int No = 0;

    printf("\n Enter the Number :");
    scanf("%lld",&No);

    Z_Cnt = Zero_Dig_Cnt(No);

    printf("\n Count of zero in given number %lld : %i", No, Z_Cnt);

    getch();
    return 0;
}
long long int Zero_Dig_Cnt(long long int Num)
{
    short int Dig = 0, Cnt = 0;

    while(Num != 0)
    {
         Dig = Num % 10;

         if(Dig == 0)
         {
             Cnt++;
         }
         Num = Num / 10;
    }

    return Cnt;
}


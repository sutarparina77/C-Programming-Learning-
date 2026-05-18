#include<stdio.h>
#include<conio.h>

long long int Digit_Reverse(long long int);
int main()
{
    long long int No = 0, Rev = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Rev = Digit_Reverse(No);

    printf("\n Reverse of given number %lld : %lld", No, Rev);

    getch();
    return 0;
}
long long int Digit_Reverse(long long int Num)
{
    long long int Res = 0;

    while(Num != 0)
    {
         Res = (Res*10) + Num % 10;;
         Num = Num / 10;
    }

    return Res;
}


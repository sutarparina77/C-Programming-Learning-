#include<stdio.h>
#include<conio.h>

long long int Digit_Reverse(long long int);
int Check_Palindrome(int);

int main()
{
    long long int No = 0, Rev = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Rev = Digit_Reverse(No);
    Check_Palindrome(No);

    getch();
    return 0;
}
long long int Digit_Reverse(long long int Num)
{
    long long int Res = 0;

    while(Num != 0)
    {
         Res = (Res*10) + Num % 10;
         Num = Num / 10;
    }

    return Res;
}

int Check_Palindrome(int Num)
{
    long long int Res = 0;

    if(Res == Num)
    {
        printf("\n Given number is palindrome.");
    }
    else
    {
        printf("\n Given number is not a palindrome.");
    }

    return Res;
 }

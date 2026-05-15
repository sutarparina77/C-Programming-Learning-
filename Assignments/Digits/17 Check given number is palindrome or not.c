#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Rev = 0, Dig = 0, Temp = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Temp = No;
    while(Temp != 0)
    {
         Dig = Temp % 10;
         Rev = (Rev*10) + Dig;
         Temp = Temp / 10;
    }

    if(Rev == No)
    {
        printf("\n Given number is palindrome");
    }
    else
    {
        printf("\n Given number is not a palindrome");
    }

    getch();
    return 0;
}


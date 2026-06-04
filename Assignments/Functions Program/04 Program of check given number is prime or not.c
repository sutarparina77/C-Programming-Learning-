#include<stdio.h>
#include<conio.h>

void Check_Prime(int);

int main()
{
    int No = 0, j = 0;

    printf("\n Enter any positive integer :");
    scanf("%d",&No);

    Check_Prime(No);

    if(No == j)
    {
        printf("\n Given number %d is prime.", No);
    }
    else
    {
        printf("\n Given number %d is not a prime.", No);
    }

    getch();
    return 0;
}
void Check_Prime(int Num)
{
    int i = 0;

    if(Num < 1)
    {
        printf("\n Invalid Number");
    }

    for(i = 2; i <= Num; i++)
    {
       if(Num % i == 0)
       {
           break;
       }
    }
}


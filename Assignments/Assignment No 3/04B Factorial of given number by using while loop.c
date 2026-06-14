#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0;
    long int Fact = 1;

    printf("\n Enter any positive integer: ");
    scanf("%d",&No);

    if(No <= 0)
    {
        printf("\n Invalid Number. ");
        return -1;
    }

    Temp = No;

    while( Temp > 1)
    {
        Fact = Fact * Temp;

        Temp--;
    }

    printf("\n Factorial of %d is : %d", No, Fact);

    getch();
    return 0;
}

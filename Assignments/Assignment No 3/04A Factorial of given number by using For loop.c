#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0;
    long int Fact = 0;

    printf("\n Enter any positive integer: ");
    scanf("%d",&No);

    if(No <= 0)
    {
        printf("\n Invalid Number. ");
        return -1;
    }

    for(Fact = 1, Temp = No; Temp > 1; Temp--)
    {
        Fact = Fact * Temp;
    }

    printf("\n Factorial of %d is : %d", No, Fact);

    getch();
    return 0;
}

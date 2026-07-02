#include<stdio.h>
#include<conio.h>

void Add(int, int);                 ///Function Declaration
int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Main Welcomes you\n");

    printf("\n Enter 1st number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd number :");
    scanf("%d",&No2);

    Add(No1, No2);                  ///Function Call

    printf("\n Thanks");

    getch();
    return 0;
}
void Add(int N1, int N2)                   ///Function Definition
{
    int Sum = 0;

    Sum = N1 + N2;

    printf("\n Addition of %d and %d is = %d\n", N1, N2, Sum);

    return;
}

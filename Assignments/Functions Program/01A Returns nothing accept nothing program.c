#include<stdio.h>
#include<conio.h>

void Add();                 ///Function Declaration
int main()
{
    printf("\n Main Welcomes you\n");

    Add();                  ///Function Call

    printf("\n Thanks");

    getch();
    return 0;
}
void Add()                   ///Function Definition
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 1st number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd number :");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n Addition of %d and %d is = %d\n", No1, No2, Sum);

    return;
}

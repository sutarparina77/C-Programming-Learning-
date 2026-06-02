#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Res = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Res = No | 15;

    printf("\n Modified number of given number %d : %d", No, Res);

    getch();
    return 0;
}

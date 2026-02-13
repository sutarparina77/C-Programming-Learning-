#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0, N2 = 0, Res = 0;

    printf("\n Enter 1st number:");
    scanf("%d",&N1);

    printf("\n Enter 2nd number:");
    scanf("%d",&N2);

    Res =  N1 << N2;

    printf("\n Result of %d Left Shift %d : %d", N1, N2, Res);

    getch();
    return 0;
}

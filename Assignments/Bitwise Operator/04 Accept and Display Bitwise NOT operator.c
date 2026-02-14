#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0, Res = 0;

    printf("\n Enter 1st number:");
    scanf("%d",&N1);

    Res = ~ N1;

    printf("\n Result of NOT %d : %d", N1, Res);

    getch();
    return 0;
}


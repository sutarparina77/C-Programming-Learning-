#include<stdio.h>
#include<conio.h>

int Book_Read();
int main()
{
    int No = 0;

    No = Book_Read();
    printf("\n Pages read on the first day = %d.", No);

    No = Book_Read();
    printf("\n Pages read on the Second day = %d.", No);

    No = Book_Read();
    printf("\n Pages read on the Third day = %d.", No);

    getch();
    return 0;
}

int Book_Read()
{
    static int Res = 10;
    int PgCnt = 0;

    printf("\n\n How many pages read today = ");
    scanf("%d",&PgCnt);

    Res = Res + PgCnt;

    return Res;
}

#include<stdio.h>
#include<conio.h>
int Divide(int No1, int No2);

int main()
{
    int Val1 = 15, Val2 = 5, Ret = 0;

    Ret = Divide(15, 5);
    printf("Division of %d and %d is = %d.", Val1, Val2, Ret);

    getch();
    return 0;
}
int Divide(int No1, int No2)
{
    int Res = 0;

    if(No2 < 0)
    {
        return -1;
    }
    Res = No1 / No2;

    return Res;
}

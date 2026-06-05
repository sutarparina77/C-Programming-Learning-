#include<stdio.h>
#include<conio.h>

int X_RaiseTo_Y(int, int);

int main()
{
    int X = 0, Y = 0, Pow = 0;

    printf("\n Enter a base :");
    scanf("%d",&X);

    printf("\n Enter a exponential :");
    scanf("%d",&Y);

    Pow = X_RaiseTo_Y(X, Y);

    printf("\n Result of %d ^ %d is = %d.", X, Y, Pow);

    getch();
    return 0;
}

int X_RaiseTo_Y(int Base, int Exp)
{
    int Temp = 0, Res = 0;

    if(Base == 0 || Base == 1)
    {
        Res = Base;
    }
    else if(Exp < 0)
    {
        printf("\n Invalid Number");
    }
    else
    {
        for(Res = 1, Temp = Exp; Temp > 0; Temp--)
        {
            Res = Res * Base;
        }
    }
    return Res;
}


#include<stdio.h>
#include<conio.h>

int Num_Square(int);
int Num_Cube(int);

int main()
{
    int No = 0, Square = 0, Res = 0;

    printf("\n Enter any positive integer :");
    scanf("%d",&No);

    Square = Num_Square(No);
    Res = Num_Cube(No);

    printf("\n Square of Given number %d is : %d.", No, Square);
    printf("\n Cube of Given number %d is : %d.", No, Res);

    getch();
    return 0;
}
int Num_Square(int Num)
{
    int Sqr = 0;

    Sqr = Num * Num;

    return Sqr;
}

int Num_Cube(int Num)
{
    int Cube = 0;

    Cube = Num * Num * Num;

    return Cube;
}

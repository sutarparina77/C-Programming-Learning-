#include<stdio.h>
#include<conio.h>

int Add(int, int);
int main()
{
    int N1 = 20, N2 = 30, Sum = 0;

    Sum = Add(N1, N2);

    printf("\n Addition of %d and %d = %d", N1, N2, Sum);

    getch();
    return 0;
}
int Add(int N1, int N2)
{
    auto int Sum = 0;

    Sum = N1 + N2;

    return Sum;
}

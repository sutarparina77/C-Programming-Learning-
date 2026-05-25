#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5] = {10,20,30,40,50};
    int *Ptr = &Num[3];

    printf("\n Base address of array is = %d", Num);
    printf("\n Value in pointer is = %d", Ptr);
    printf("\n Value of array element where pointer pointing : %d\n", *Ptr);

    getch();

    Ptr = Ptr - 2;

    printf("\n New value in pointer is = %d", Ptr);
    printf("\n Value of array element where pointer pointing : %d", *Ptr);

    getch();
    return 0;
}


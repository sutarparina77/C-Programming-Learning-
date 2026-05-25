#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5] = {10,20,30,40,50};
    int *Ptr = Num;

    printf("\n Base address of array is = %d", Num);                        ///5422592
    printf("\n Value in pointer is = %d", Ptr);                             ///5422592
    printf("\n Value of array element where pointer pointing : %d\n", *Ptr); ///10

    getch();

    Ptr = Ptr + 2;

    printf("\n New value in pointer is = %d", Ptr);                         ///5422600
    printf("\n Value of array element where pointer pointing : %d", *Ptr);  ///30

    getch();
    return 0;
}


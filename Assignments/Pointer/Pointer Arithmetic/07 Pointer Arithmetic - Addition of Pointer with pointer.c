#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 21, No2 = 30;

    int *Res = 0;
    int *Ptr1 = &No1;
    int *Ptr2 = &No2;

    printf("\n Base address of 1st variable is = %d", &No1);
    printf("\n Base address of 2nd variable is = %d", &No2);

    printf("\n Value in pointer1 is = %d", Ptr1);
    printf("\n Value in pointer2 is = %d", Ptr2);

    printf("\n Value of variable where pointer pointing : %d\n", *Ptr1);
    printf("\n Value of variable where pointer pointing : %d\n", *Ptr1);

    getch();

    Res = Ptr1 + Ptr2;                                            ///Not Allowed

    printf("\n Value of pointer variable result is : %d", Res);

    getch();
    return 0;
}


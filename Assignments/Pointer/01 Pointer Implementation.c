#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 31, Num = 40;
    int *Ptr1 = &No;
    int *Ptr2 = &No;

    printf("\n Value of No : %d", No);
    printf("\n Address of No : %d", &No);
    printf("\n Value of No using its pointer Ptr1 : %d", *Ptr1);
    printf("\n Address of No using Ptr1 : %d", &Ptr1);
    printf("\n Address of Ptr1 : %d \n", &Ptr1);

    printf("\n Value of Num : %d", Num);
    printf("\n Address of Num : %d", &Num);
    printf("\n Value of Num using its pointer Ptr2 : %d", *Ptr2);
    printf("\n Address of Num using Ptr2 : %d", &Ptr2);
    printf("\n Address of Ptr2 : %d", &Ptr2);

    getch();
    return 0;
}


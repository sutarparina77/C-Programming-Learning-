#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5
int main()
{
    int i = 0, Bill[Size] = {}, Max_Bill = 0, Sec_Max_Bill = 0, flag = 0;

    printf("\n Enter all %d bills \n", Size);

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Bill no. %d:", i+1);
        scanf("%d",&Bill[i]);

        if((i == 0) || (Bill[i] > Max_Bill))
        {
            Max_Bill = Bill[i];
        }
    }
    for(i = 0; i < Size; i++)
    {
        if(Bill[i] == Max_Bill)
        {
            continue;
        }

        if((flag == 0) || (Bill[i] > Sec_Max_Bill))
        {
           Sec_Max_Bill = Bill[i];
           flag = 1;
        }
    }

    getch();

    printf("\n First Maximum bill from all bills is = %d", Max_Bill);
    printf("\n Second Maximum bill from all bills is = %d", Sec_Max_Bill);

    printf("\n THANKS");

    getch();
    return 0;
}

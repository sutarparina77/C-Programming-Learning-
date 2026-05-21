#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Bit_No = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    printf("\n Enter the bit Number :");
    scanf("%d",&Bit_No);

    if(No & (1 << (Bit_No - 1)) == 0)
    {
        printf("\n %d bit of given number %d is Off", Bit_No, No);
    }
    else
    {
        printf("\n %d bit of given number %d is ON", Bit_No, No);
    }

    getch();
    return 0;
}


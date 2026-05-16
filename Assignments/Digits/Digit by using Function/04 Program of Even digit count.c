#include<stdio.h>
#include<conio.h>

int Even_Digit_Count(int);
int main()
{
    int No = 0, Evn_D_Cnt = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Evn_D_Cnt = Even_Digit_Count(No);       ///Function call

    printf("\n Even digit Count of given number %d : %d", No, Evn_D_Cnt);

    getch();
    return 0;
}
int Even_Digit_Count(int Num)
{
    int Cnt = 0, Dig = 0;

    while(Num != 0)
    {
         Dig = Num % 10;
         if(Num %2 == 0 && Dig != 0)
         {
            Cnt++;
         }
         Num = Num / 10;
    }

    return Cnt;
}


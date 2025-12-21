#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1 = 0, Num2 = 0, Num3 = 0;
    
    printf("\n Enter 1st Number");
    scanf("%d",&Num1);
    
    printf("\n Enter 2nd Number");
    scanf("%d",&Num2);
    
    printf("\n Enter 3rd Number");
    scanf("%d",&Num3);
    
    if(Num1 > Num2 && Num1 > Num3)
    {
        printf("\n The Maximum Number is: %d", Num1);
    }
    else if(Num2 > Num1 && Num2 > Num3)
    {
        printf("\n The Maximum Number is: %d", Num2);
    }
    else
    {
        printf("\n The Maximum Number is: %d", Num3);
    }
    getch();
    return 0;
}

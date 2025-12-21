#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1 = 0, Num2 = 0;
    
    printf("\n Enter 1st Number ");
    scanf("%d",&Num1);
    
    printf("\n Enter 2nd Number ");
    scanf("%d",&Num2);
    
    if(Num1 > Num2 )
    {
        printf("\n The Maximum Number is: %d", Num1);
    }
    else 
    {
        printf("\n The Maximum Number is: %d", Num2);
    }
    getch();
    return 0;
 }

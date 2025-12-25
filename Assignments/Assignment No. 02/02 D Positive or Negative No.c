#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    
    printf("\n Enter The Number");
    scanf("%d",&Num);
    
    (Num == 0) ? printf("\n Number is Neutral") : (Num > 0) ? printf("\n Number is Positive") : printf("\n Number is Negative");
  
    printf("\n THANKS");
    
    getch();
    return 0;
}
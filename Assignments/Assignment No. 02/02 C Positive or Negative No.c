#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    up:
    
    printf("\n Enter The Number");
    scanf("%d",&Num);
    
    if(Num == 0)
    {
        printf("\n Number is Neutral");
        goto up;
    }
    
    (Num > 0) ? printf("\n Number is Positive") : printf("\n Number is Negative");
  
    printf("\n THANKS");
    
    getch();
    return 0;
}
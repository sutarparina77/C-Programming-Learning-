#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    
    printf("\n Enter The Number");
    scanf("%d",&Num);
    
    if(Num > 0)
    {
        printf("\n Number is Positive");
    }
    else
    {
        printf("\n Number is Negative");
    }

    printf("\n THANKS");
    
    getch();
    return 0;
}

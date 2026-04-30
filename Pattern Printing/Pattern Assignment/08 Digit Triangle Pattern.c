#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, RC = 0, No = 0, Cnt = 0;

    printf("\n Enter Row and Column Size : ");
    scanf("%d",&RC);

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(j == 1 || i == RC || i >= j)
            {
                printf(" %d ", No);
                No = No + 5;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;

}

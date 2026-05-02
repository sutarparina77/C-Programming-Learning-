#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, RC = 0, No = 0, Temp = 1;

    printf("\n Enter Row and Column Size : ");
    scanf("%d",&RC);

    No = Temp;

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(j == 1 || i == RC || i >= j)
            {
                printf(" %d ", No);

                No = i + j;
                i = j;
                j = Temp;
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

#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, RC = 0;
    char ch = '\0';

    printf("\n Enter Row and Column Size: ");
    scanf("%d",&RC);

    for(ch = 'A', i = 1; i <= RC; i++, ch++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(j == 1 || i == RC || i >= j)
            {
                printf(" %c ", ch);
                ch++;
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

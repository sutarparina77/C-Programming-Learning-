#include<stdio.h>
#include<conio.h>
int main()
{
    char sPT = '\0', ePT = '\0';

    printf("\n Enter Starting letter :");
    sPT = getche();

    printf("\n Enter Ending letter :");
    ePT = getche();

    printf("\n Output ==> \n\n");

    while(sPT >= ePT)
    {
        printf(" %c ", sPT);
        sPT--;
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 24;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;

    printf("\n %d",&No);        ///732
    printf("\n %d",&p);         ///728
    printf("\n %d",&q);         ///724
    printf("\n %d",&r);         ///720
    printf("\n %d",&s);         ///716
    printf("\n %d",&t);         ///712
    getch();

    printf("\n\n %d", No);      ///24
    printf("\n %d" , &No);      ///732
    printf("\n %d", &p);        ///728
    printf("\n %d" , *p);       ///24
    printf("\n %d", **t);       ///724
    printf("\n %d" , **(&s));   ///724
    printf("\n %d", &(***r));   ///732
    printf("\n %d", ****t);     ///732
    printf("\n %d" , ***(&t));  ///724

    getch();
    return 0;
}

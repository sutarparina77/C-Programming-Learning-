#include<stdio.h>
#include<conio.h>
int main()
{
     float Rad = 0.0, Circum = 0.0;
     
     printf("\n Radius of Circle = ");
     scanf("%f",&Rad);
     
     Circum = 2 *  3.14 * Rad ;
       
     printf("\n Circumference of Circle is = %0.4f",Circum);
     
     getch();
     return 0;
}

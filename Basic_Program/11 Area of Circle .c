#include<stdio.h>
#include<conio.h>
int main()
{
     float Rad = 0.0, Area = 0.0;
     
     printf("\n Radius of Circle = ");
     scanf("%f",&Rad);
     
     Area = 3.14 * Rad * Rad;
       
     printf("\n Area of Circle is = %0.4f",Area);
     
     getch();
     return 0;
}

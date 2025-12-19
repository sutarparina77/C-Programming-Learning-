#include<stdio.h>
#include<conio.h>
int main()
{
     float Side = 0.0, Area = 0.0;
     
     printf("\n Enter Side = ");
     scanf("%f",&Side);
     
     Area = Side * Side;
       
     printf("\n Area of Square is = %f.",Area);
     
     getch();
     return 0;
}

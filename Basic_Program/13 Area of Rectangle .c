#include<stdio.h>
#include<conio.h>
int main()
{
     float Width = 0.0, Height = 0.0, Area = 0.0;
     
     printf("\n Enter Width = ");
     scanf("%f",&Width);
     
     printf("\n Enter Height = ");
     scanf("%f",& Height);
     
     Area = Width * Height;
       
     printf("\n Area of Rectangle is = %f.",Area);
     
     getch();
     return 0;
}

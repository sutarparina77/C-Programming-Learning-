#include<stdio.h>
#include<conio.h>
int main()
{
     int Phy = 0, Chem = 0, Maths = 0, Total = 0;
     float Per = 0;
     
     printf("\n Enter Physics Marks = ");
     scanf("%d",&Phy);
     
     printf("\n Enter Chemistry Marks = ");
     scanf("%d",&Chem);
     
     printf("\n Enter Maths Marks = ");
     scanf("%d",&Maths);
     
     Total = Phy + Chem + Maths;
     
     Per = Total / 3.0;
       
     printf("\n Total = %d, Percentage = %0.2f",Total, Per);
   
     getch();
     return 0;
}

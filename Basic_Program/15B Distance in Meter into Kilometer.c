#include<stdio.h>
#include<conio.h>
int main()
{
     float Meter = 0.0, Kms = 0.0;
     
     printf("\n Enter Distance in Kilometer = ");
     scanf("%f",&Kms);
     
     Meter = Kms * 1000;
       
     printf("\n Distance in Meter is = %0.4f.",Meter);
     
     getch();
     return 0;
}

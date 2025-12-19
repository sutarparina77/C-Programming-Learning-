#include<stdio.h>
#include<conio.h>
int main()
{
     float Meter = 0.0, Kms = 0.0;
     
     printf("\n Enter Distance in Meter = ");
     scanf("%f",&Meter);
     
     Kms = Meter / 1000;
       
     printf("\n Distance in kilometer is = %0.4f.",Kms);
     
     getch();
     return 0;
}
